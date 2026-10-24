package com.gpk17.gbrowser.Utils.cryptor;

import android.util.Base64;
import android.util.Log;
import java.io.IOException;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.KeyStoreException;
import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;
import java.security.UnrecoverableEntryException;
import java.security.cert.CertificateException;
import javax.crypto.BadPaddingException;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;

/* JADX INFO: loaded from: classes.dex */
public class AppCryptor {
    private static final String ANDROID_KEY_STORE = "AndroidKeyStore";
    private static final String SAMPLE_ALIAS = "du23u-3077548ALIAS";
    private static final String TAG = "AppCryptor";
    private static final String TRANSFORMATION = "AES/GCM/NoPadding";
    private DeCryptor deCryptor;
    private EnCryptor enCryptor;

    public AppCryptor() {
        try {
            this.enCryptor = new EnCryptor(TRANSFORMATION, ANDROID_KEY_STORE, SAMPLE_ALIAS);
        } catch (InvalidAlgorithmParameterException | InvalidKeyException | NoSuchAlgorithmException | NoSuchProviderException | BadPaddingException | IllegalBlockSizeException | NoSuchPaddingException e) {
            Log.e(TAG, "AppCryptor() new EnCryptor Result: " + e.getMessage(), e);
        }
        try {
            this.deCryptor = new DeCryptor(TRANSFORMATION, ANDROID_KEY_STORE, SAMPLE_ALIAS);
        } catch (IOException | KeyStoreException | NoSuchAlgorithmException | CertificateException e2) {
            Log.e(TAG, "AppCryptor() new deCryptor Result: " + e2.getMessage(), e2);
        }
    }

    public String decryptInfo() {
        String strDecryptData = "";
        try {
            strDecryptData = this.deCryptor.decryptData(this.enCryptor.getEncryption(), this.enCryptor.getIv());
            Log.d(TAG, "decryptInfo() decryptResult: " + strDecryptData);
            return strDecryptData;
        } catch (InvalidAlgorithmParameterException | BadPaddingException | IllegalBlockSizeException e) {
            e.printStackTrace();
            return strDecryptData;
        } catch (InvalidKeyException | KeyStoreException | NoSuchAlgorithmException | UnrecoverableEntryException | NoSuchPaddingException e2) {
            Log.e(TAG, "decryptInfo() called with: " + e2.getMessage(), e2);
            return strDecryptData;
        }
    }

    public void encryptInfo(String str) {
        try {
            try {
                Log.d(TAG, "encryptInfo() encryptedInfo: " + Base64.encodeToString(this.enCryptor.encryptText(str), 0));
            } catch (BadPaddingException | IllegalBlockSizeException e) {
                Log.e(TAG, "encryptInfo() called with: " + e.getMessage(), e);
            }
        } catch (InvalidAlgorithmParameterException | InvalidKeyException | NoSuchAlgorithmException | NoSuchProviderException | NoSuchPaddingException e2) {
            e2.printStackTrace();
        }
    }
}
