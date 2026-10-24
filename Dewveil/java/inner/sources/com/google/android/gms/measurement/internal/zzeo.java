package com.google.android.gms.measurement.internal;

import com.google.android.gms.common.internal.Preconditions;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
final class zzeo implements Runnable {
    final /* synthetic */ zzep zza;
    private final URL zzb;
    private final byte[] zzc;
    private final zzel zzd;
    private final String zze;
    private final Map zzf;

    public zzeo(zzep zzepVar, String str, URL url, byte[] bArr, Map map, zzel zzelVar) {
        this.zza = zzepVar;
        Preconditions.checkNotEmpty(str);
        Preconditions.checkNotNull(url);
        Preconditions.checkNotNull(zzelVar);
        this.zzb = url;
        this.zzc = bArr;
        this.zzd = zzelVar;
        this.zze = str;
        this.zzf = map;
    }

    /* JADX WARN: Code duplicated, block: B:28:0x00c9 A[Catch: all -> 0x00f3, LOOP:1: B:26:0x00c3->B:28:0x00c9, LOOP_END, TryCatch #7 {all -> 0x00f3, blocks: (B:25:0x00c1, B:26:0x00c3, B:28:0x00c9, B:29:0x00cd), top: B:84:0x00c1 }] */
    /* JADX WARN: Code duplicated, block: B:31:0x00d3 A[Catch: all -> 0x00fd, IOException -> 0x0102, TRY_ENTER, TRY_LEAVE, TryCatch #10 {IOException -> 0x0102, all -> 0x00fd, blocks: (B:31:0x00d3, B:42:0x00f9, B:43:0x00fc), top: B:93:0x00b2 }] */
    /* JADX WARN: Code duplicated, block: B:33:0x00d8  */
    /* JADX WARN: Code duplicated, block: B:66:0x0148  */
    /* JADX WARN: Code duplicated, block: B:78:0x0188  */
    /* JADX WARN: Code duplicated, block: B:80:0x016c A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:82:0x012c A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:96:0x00cd A[EDGE_INSN: B:96:0x00cd->B:29:0x00cd BREAK  A[LOOP:1: B:26:0x00c3->B:28:0x00c9], SYNTHETIC] */
    /* JADX WARN: Not initialized variable reg: 11, insn: 0x0100: MOVE (r12 I:??[OBJECT, ARRAY]) = (r11 I:??[OBJECT, ARRAY]), block:B:45:0x00fe */
    /* JADX WARN: Not initialized variable reg: 11, insn: 0x0106: MOVE (r12 I:??[OBJECT, ARRAY]) = (r11 I:??[OBJECT, ARRAY]), block:B:47:0x0103 */
    @Override // java.lang.Runnable
    public final void run() throws Throwable {
        Throwable th;
        int i;
        HttpURLConnection httpURLConnection;
        Map map;
        IOException e;
        Map map2;
        zzen zzenVar;
        zzfq zzfqVarZzaz;
        IOException iOException;
        int responseCode;
        Map map3;
        Map map4;
        InputStream inputStream;
        ByteArrayOutputStream byteArrayOutputStream;
        byte[] bArr;
        int i2;
        this.zza.zzax();
        int i3 = 0;
        OutputStream outputStream = null;
        try {
            zzep zzepVar = this.zza;
            URLConnection uRLConnectionOpenConnection = this.zzb.openConnection();
            if (!(uRLConnectionOpenConnection instanceof HttpURLConnection)) {
                throw new IOException("Failed to obtain HTTP connection");
            }
            httpURLConnection = (HttpURLConnection) uRLConnectionOpenConnection;
            httpURLConnection.setDefaultUseCaches(false);
            zzepVar.zzs.zzf();
            httpURLConnection.setConnectTimeout(60000);
            zzepVar.zzs.zzf();
            httpURLConnection.setReadTimeout(61000);
            httpURLConnection.setInstanceFollowRedirects(false);
            httpURLConnection.setDoInput(true);
            try {
                Map map5 = this.zzf;
                if (map5 != null) {
                    for (Map.Entry entry : map5.entrySet()) {
                        httpURLConnection.addRequestProperty((String) entry.getKey(), (String) entry.getValue());
                    }
                }
                if (this.zzc != null) {
                    byte[] bArrZzy = this.zza.zzf.zzu().zzy(this.zzc);
                    zzeh zzehVarZzj = this.zza.zzs.zzay().zzj();
                    int length = bArrZzy.length;
                    zzehVarZzj.zzb("Uploading data. size", Integer.valueOf(length));
                    httpURLConnection.setDoOutput(true);
                    httpURLConnection.addRequestProperty("Content-Encoding", "gzip");
                    httpURLConnection.setFixedLengthStreamingMode(length);
                    httpURLConnection.connect();
                    OutputStream outputStream2 = httpURLConnection.getOutputStream();
                    try {
                        outputStream2.write(bArrZzy);
                        outputStream2.close();
                        responseCode = httpURLConnection.getResponseCode();
                        try {
                            try {
                                Map<String, List<String>> headerFields = httpURLConnection.getHeaderFields();
                                try {
                                    byteArrayOutputStream = new ByteArrayOutputStream();
                                    inputStream = httpURLConnection.getInputStream();
                                    try {
                                        bArr = new byte[1024];
                                        while (true) {
                                            i2 = inputStream.read(bArr);
                                            if (i2 > 0) {
                                                break;
                                            } else {
                                                byteArrayOutputStream.write(bArr, 0, i2);
                                            }
                                        }
                                        byte[] byteArray = byteArrayOutputStream.toByteArray();
                                        if (inputStream != null) {
                                            inputStream.close();
                                        }
                                        if (httpURLConnection != null) {
                                            httpURLConnection.disconnect();
                                        }
                                        zzfqVarZzaz = this.zza.zzs.zzaz();
                                        zzenVar = new zzen(this.zze, this.zzd, responseCode, null, byteArray, headerFields, null);
                                    } catch (Throwable th2) {
                                        th = th2;
                                        if (inputStream != null) {
                                            inputStream.close();
                                        }
                                        throw th;
                                    }
                                } catch (Throwable th3) {
                                    th = th3;
                                    inputStream = null;
                                }
                            } catch (IOException e2) {
                                map2 = null;
                                iOException = e2;
                                i3 = responseCode;
                                if (outputStream != null) {
                                    try {
                                        outputStream.close();
                                    } catch (IOException e3) {
                                        this.zza.zzs.zzay().zzd().zzc("Error closing HTTP compressed POST connection output stream. appId", zzej.zzn(this.zze), e3);
                                    }
                                }
                                if (httpURLConnection != null) {
                                    httpURLConnection.disconnect();
                                }
                                zzfqVarZzaz = this.zza.zzs.zzaz();
                                zzenVar = new zzen(this.zze, this.zzd, i3, iOException, null, map2, null);
                            } catch (Throwable th4) {
                                th = th4;
                                map = null;
                                i = responseCode;
                                if (outputStream != null) {
                                    try {
                                        outputStream.close();
                                    } catch (IOException e4) {
                                        this.zza.zzs.zzay().zzd().zzc("Error closing HTTP compressed POST connection output stream. appId", zzej.zzn(this.zze), e4);
                                    }
                                }
                                if (httpURLConnection != null) {
                                    httpURLConnection.disconnect();
                                }
                                this.zza.zzs.zzaz().zzp(new zzen(this.zze, this.zzd, i, null, null, map, null));
                                throw th;
                            }
                        } catch (IOException e5) {
                            iOException = e5;
                            i3 = responseCode;
                            map2 = map4;
                            if (outputStream != null) {
                                outputStream.close();
                            }
                            if (httpURLConnection != null) {
                                httpURLConnection.disconnect();
                            }
                            zzfqVarZzaz = this.zza.zzs.zzaz();
                            zzenVar = new zzen(this.zze, this.zzd, i3, iOException, null, map2, null);
                        } catch (Throwable th5) {
                            th = th5;
                            i = responseCode;
                            map = map3;
                            if (outputStream != null) {
                                outputStream.close();
                            }
                            if (httpURLConnection != null) {
                                httpURLConnection.disconnect();
                            }
                            this.zza.zzs.zzaz().zzp(new zzen(this.zze, this.zzd, i, null, null, map, null));
                            throw th;
                        }
                    } catch (IOException e6) {
                        e = e6;
                        map2 = null;
                        outputStream = outputStream2;
                        iOException = e;
                        if (outputStream != null) {
                            outputStream.close();
                        }
                        if (httpURLConnection != null) {
                            httpURLConnection.disconnect();
                        }
                        zzfqVarZzaz = this.zza.zzs.zzaz();
                        zzenVar = new zzen(this.zze, this.zzd, i3, iOException, null, map2, null);
                        zzfqVarZzaz.zzp(zzenVar);
                    } catch (Throwable th6) {
                        th = th6;
                        i = 0;
                        map = null;
                        outputStream = outputStream2;
                        if (outputStream != null) {
                            outputStream.close();
                        }
                        if (httpURLConnection != null) {
                            httpURLConnection.disconnect();
                        }
                        this.zza.zzs.zzaz().zzp(new zzen(this.zze, this.zzd, i, null, null, map, null));
                        throw th;
                    }
                } else {
                    responseCode = httpURLConnection.getResponseCode();
                    Map<String, List<String>> headerFields2 = httpURLConnection.getHeaderFields();
                    byteArrayOutputStream = new ByteArrayOutputStream();
                    inputStream = httpURLConnection.getInputStream();
                    bArr = new byte[1024];
                    while (true) {
                        i2 = inputStream.read(bArr);
                        if (i2 > 0) {
                            break;
                            break;
                        }
                        byteArrayOutputStream.write(bArr, 0, i2);
                    }
                    byte[] byteArray2 = byteArrayOutputStream.toByteArray();
                    if (inputStream != null) {
                        inputStream.close();
                    }
                    if (httpURLConnection != null) {
                        httpURLConnection.disconnect();
                    }
                    zzfqVarZzaz = this.zza.zzs.zzaz();
                    zzenVar = new zzen(this.zze, this.zzd, responseCode, null, byteArray2, headerFields2, null);
                }
            } catch (IOException e7) {
                i3 = 0;
                map2 = null;
                iOException = e7;
            } catch (Throwable th7) {
                i = 0;
                map = null;
                th = th7;
            }
            zzfqVarZzaz.zzp(zzenVar);
        } catch (IOException e8) {
            e = e8;
            httpURLConnection = null;
            map2 = null;
        } catch (Throwable th8) {
            th = th8;
            i = 0;
            httpURLConnection = null;
            map = null;
        }
    }
}
