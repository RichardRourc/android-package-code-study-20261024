package com.gpk17.gbrowser.Utils.cryptor;

import android.content.Context;
import android.security.KeyPairGeneratorSpec;
import android.security.keystore.KeyGenParameterSpec;
import android.util.Base64;
import android.util.Log;
import com.adjust.sdk.Constants;
import com.gpk17.gbrowser.BuildConfig;
import java.math.BigInteger;
import java.security.InvalidAlgorithmParameterException;
import java.security.KeyPairGenerator;
import java.security.KeyStore;
import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.util.Calendar;
import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import javax.security.auth.x500.X500Principal;

/* JADX INFO: loaded from: classes.dex */
public class KeyStoreUtil {
    private static final String AES_MODE = "AES/GCM/NoPadding";
    private static final String KEYSTORE_ALIAS = BuildConfig.PROJECT_NAME.replace("-", "") + "ALIAS";
    private static final String KEYSTORE_PROVIDER = "AndroidKeyStore";
    private static final String RSA_MODE = "RSA/ECB/PKCS1Padding";
    private static final String TAG = "KeyStoreUtil";
    private KeyStore keyStore;
    private KeyStoreSpUtil keyStoreSpUtil;

    public KeyStoreUtil(Context context, KeyStoreSpUtil keyStoreSpUtil) {
        try {
            this.keyStoreSpUtil = keyStoreSpUtil;
            KeyStore keyStore = KeyStore.getInstance(KEYSTORE_PROVIDER);
            this.keyStore = keyStore;
            keyStore.load(null);
            if (this.keyStore.containsAlias(KEYSTORE_ALIAS)) {
                return;
            }
            keyStoreSpUtil.setIV("");
            genKeyStoreKey(context);
            genAESKey();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void genKeyStoreKey(Context context) throws Exception {
        generateRSAKey_AboveApi23();
    }

    private void generateRSAKey_AboveApi23() throws Exception {
        KeyPairGenerator keyPairGenerator = KeyPairGenerator.getInstance("RSA", KEYSTORE_PROVIDER);
        keyPairGenerator.initialize(new KeyGenParameterSpec.Builder(KEYSTORE_ALIAS, 3).setDigests(Constants.SHA256, "SHA-512").setEncryptionPaddings("PKCS1Padding").build());
        keyPairGenerator.generateKeyPair();
    }

    private void generateRSAKey_BelowApi23(Context context) throws NoSuchAlgorithmException, NoSuchProviderException, InvalidAlgorithmParameterException {
        Calendar calendar = Calendar.getInstance();
        Calendar calendar2 = Calendar.getInstance();
        calendar2.add(1, 30);
        KeyPairGeneratorSpec.Builder builder = new KeyPairGeneratorSpec.Builder(context);
        String str = KEYSTORE_ALIAS;
        KeyPairGeneratorSpec keyPairGeneratorSpecBuild = builder.setAlias(str).setSubject(new X500Principal("CN=" + str)).setSerialNumber(BigInteger.TEN).setStartDate(calendar.getTime()).setEndDate(calendar2.getTime()).build();
        KeyPairGenerator keyPairGenerator = KeyPairGenerator.getInstance("RSA", KEYSTORE_PROVIDER);
        keyPairGenerator.initialize(keyPairGeneratorSpecBuild);
        keyPairGenerator.generateKeyPair();
    }

    public String encrypt(String str) {
        try {
            return encryptAES(str);
        } catch (Exception e) {
            Log.d(TAG, Log.getStackTraceString(e));
            return "";
        }
    }

    public String decrypt(String str) {
        try {
            return decryptAES(str);
        } catch (Exception e) {
            Log.d(TAG, Log.getStackTraceString(e));
            return "";
        }
    }

    private String encryptRSA(byte[] bArr) throws Exception {
        PublicKey publicKey = this.keyStore.getCertificate(KEYSTORE_ALIAS).getPublicKey();
        Cipher cipher = Cipher.getInstance(RSA_MODE);
        cipher.init(1, publicKey);
        return Base64.encodeToString(cipher.doFinal(bArr), 0);
    }

    private byte[] decryptRSA(String str) throws Exception {
        PrivateKey privateKey = (PrivateKey) this.keyStore.getKey(KEYSTORE_ALIAS, null);
        Cipher cipher = Cipher.getInstance(RSA_MODE);
        cipher.init(2, privateKey);
        return cipher.doFinal(Base64.decode(str, 0));
    }

    private void genAESKey() throws Exception {
        byte[] bArr = new byte[16];
        SecureRandom secureRandom = new SecureRandom();
        secureRandom.nextBytes(bArr);
        this.keyStoreSpUtil.setIV(Base64.encodeToString(secureRandom.generateSeed(12), 0));
        this.keyStoreSpUtil.setAESKey(encryptRSA(bArr));
    }

    private String encryptAES(String str) throws Exception {
        Cipher cipher = Cipher.getInstance(AES_MODE);
        cipher.init(1, getAESKey(), new IvParameterSpec(getIV()));
        return Base64.encodeToString(cipher.doFinal(str.getBytes()), 0);
    }

    private String decryptAES(String str) throws Exception {
        byte[] bArrDecode = Base64.decode(str.getBytes(), 0);
        Cipher cipher = Cipher.getInstance(AES_MODE);
        cipher.init(2, getAESKey(), new IvParameterSpec(getIV()));
        return new String(cipher.doFinal(bArrDecode));
    }

    private byte[] getIV() {
        return Base64.decode(this.keyStoreSpUtil.getIV(), 0);
    }

    private SecretKeySpec getAESKey() throws Exception {
        return new SecretKeySpec(decryptRSA(this.keyStoreSpUtil.getAESKey()), AES_MODE);
    }
}
