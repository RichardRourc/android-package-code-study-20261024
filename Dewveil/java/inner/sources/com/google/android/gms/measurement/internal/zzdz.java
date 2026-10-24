package com.google.android.gms.measurement.internal;

import android.os.Bundle;
import android.os.IInterface;
import android.os.RemoteException;
import java.util.List;

/* JADX INFO: compiled from: com.google.android.gms:play-services-measurement-impl@@20.1.1 */
/* JADX INFO: loaded from: classes.dex */
public interface zzdz extends IInterface {
    String zzd(zzp zzpVar) throws RemoteException;

    List zze(zzp zzpVar, boolean z) throws RemoteException;

    List zzf(String str, String str2, zzp zzpVar) throws RemoteException;

    List zzg(String str, String str2, String str3) throws RemoteException;

    List zzh(String str, String str2, boolean z, zzp zzpVar) throws RemoteException;

    List zzi(String str, String str2, String str3, boolean z) throws RemoteException;

    void zzj(zzp zzpVar) throws RemoteException;

    void zzk(zzau zzauVar, zzp zzpVar) throws RemoteException;

    void zzl(zzau zzauVar, String str, String str2) throws RemoteException;

    void zzm(zzp zzpVar) throws RemoteException;

    void zzn(zzab zzabVar, zzp zzpVar) throws RemoteException;

    void zzo(zzab zzabVar) throws RemoteException;

    void zzp(zzp zzpVar) throws RemoteException;

    void zzq(long j, String str, String str2, String str3) throws RemoteException;

    void zzr(Bundle bundle, zzp zzpVar) throws RemoteException;

    void zzs(zzp zzpVar) throws RemoteException;

    void zzt(zzku zzkuVar, zzp zzpVar) throws RemoteException;

    byte[] zzu(zzau zzauVar, String str) throws RemoteException;
}
