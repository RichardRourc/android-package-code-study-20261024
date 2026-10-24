package com.gpk17.gbrowser.Utils.cryptor;

import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.KeyStore;
import java.security.KeyStoreException;
import java.security.NoSuchAlgorithmException;
import java.security.UnrecoverableEntryException;
import java.security.cert.CertificateException;
import javax.crypto.BadPaddingException;
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.SecretKey;
import javax.crypto.spec.GCMParameterSpec;

/* JADX INFO: loaded from: classes.dex */
public class DeCryptor {
    private static final String TAG = "DeCryptor";
    private String alias;
    private String androidKeyStore;
    private KeyStore keyStore;
    private String transformation;

    DeCryptor(String str, String str2, String str3) throws NoSuchAlgorithmException, IOException, KeyStoreException, CertificateException {
        this.transformation = str;
        this.androidKeyStore = str2;
        this.alias = str3;
        initKeyStore();
    }

    private void initKeyStore() throws NoSuchAlgorithmException, IOException, KeyStoreException, CertificateException {
        KeyStore keyStore = KeyStore.getInstance(this.androidKeyStore);
        this.keyStore = keyStore;
        keyStore.load(null);
    }

    String decryptData(byte[] bArr, byte[] bArr2) throws BadPaddingException, NoSuchPaddingException, IllegalBlockSizeException, NoSuchAlgorithmException, InvalidKeyException, KeyStoreException, InvalidAlgorithmParameterException, UnrecoverableEntryException {
        Cipher cipher = Cipher.getInstance(this.transformation);
        cipher.init(2, getSecretKey(this.alias), new GCMParameterSpec(128, bArr2));
        return new String(cipher.doFinal(bArr), StandardCharsets.UTF_8);
    }

    private SecretKey getSecretKey(String str) throws NoSuchAlgorithmException, KeyStoreException, UnrecoverableEntryException {
        return ((KeyStore.SecretKeyEntry) this.keyStore.getEntry(str, null)).getSecretKey();
    }
}
