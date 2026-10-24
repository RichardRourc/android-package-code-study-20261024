package com.gpk17.gbrowser.Utils.cryptor;

import android.security.keystore.KeyGenParameterSpec;
import com.google.android.gms.stats.CodePackage;
import java.nio.charset.StandardCharsets;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;
import javax.crypto.BadPaddingException;
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.KeyGenerator;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.SecretKey;

/* JADX INFO: loaded from: classes.dex */
public class EnCryptor {
    private static final String TAG = "EnCryptor";
    private String alias;
    private String androidKeyStore;
    private Cipher cipher;
    private byte[] encryption;
    private byte[] iv;
    private String transformation;

    EnCryptor(String str, String str2, String str3) throws BadPaddingException, NoSuchPaddingException, IllegalBlockSizeException, NoSuchAlgorithmException, InvalidKeyException, NoSuchProviderException, InvalidAlgorithmParameterException {
        this.transformation = str;
        this.androidKeyStore = str2;
        this.alias = str3;
        Cipher cipher = Cipher.getInstance(str);
        this.cipher = cipher;
        cipher.init(1, getSecretKey());
        this.iv = this.cipher.getIV();
        this.encryption = this.cipher.doFinal();
    }

    byte[] encryptText(String str) throws BadPaddingException, NoSuchPaddingException, IllegalBlockSizeException, NoSuchAlgorithmException, InvalidKeyException, NoSuchProviderException, InvalidAlgorithmParameterException {
        Cipher cipher = Cipher.getInstance(this.transformation);
        this.cipher = cipher;
        cipher.init(1, getSecretKey());
        this.iv = this.cipher.getIV();
        byte[] bArrDoFinal = this.cipher.doFinal(str.getBytes(StandardCharsets.UTF_8));
        this.encryption = bArrDoFinal;
        return bArrDoFinal;
    }

    private SecretKey getSecretKey() throws NoSuchAlgorithmException, NoSuchProviderException, InvalidAlgorithmParameterException {
        KeyGenerator keyGenerator = KeyGenerator.getInstance("AES", this.androidKeyStore);
        keyGenerator.init(new KeyGenParameterSpec.Builder(this.alias, 3).setBlockModes(CodePackage.GCM).setEncryptionPaddings("NoPadding").build());
        return keyGenerator.generateKey();
    }

    byte[] getEncryption() {
        return this.encryption;
    }

    byte[] getIv() {
        return this.iv;
    }
}
