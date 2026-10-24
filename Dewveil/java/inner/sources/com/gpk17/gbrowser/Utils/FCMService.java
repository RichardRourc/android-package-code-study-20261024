package com.gpk17.gbrowser.Utils;

import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.media.RingtoneManager;
import android.util.Log;
import androidx.constraintlayout.solver.widgets.analyzer.BasicMeasure;
import androidx.core.app.NotificationCompat;
import com.du23u3077548.R;
import com.google.firebase.messaging.FirebaseMessagingService;
import com.google.firebase.messaging.RemoteMessage;

/* JADX INFO: loaded from: classes.dex */
public class FCMService extends FirebaseMessagingService {
    public static final String TAG = "FCMServiceMy";

    @Override // com.google.firebase.messaging.FirebaseMessagingService
    public void onNewToken(String str) {
        super.onNewToken(str);
        Log.d(TAG, "裝置Token: " + str);
        getSharedPreferences("_", 0).edit().putString("fb", str).apply();
    }

    @Override // com.google.firebase.messaging.FirebaseMessagingService
    public void onMessageReceived(RemoteMessage remoteMessage) {
        super.onMessageReceived(remoteMessage);
        String str = TAG;
        Log.d(str, "From: " + remoteMessage.getFrom());
        if (remoteMessage.getData().size() > 0) {
            Log.d(str, "Message data payload: " + remoteMessage.getData());
        }
        if (remoteMessage.getNotification() != null) {
            Log.d(str, "Message Notification Body: " + remoteMessage.getNotification().getBody());
            showNotification(getApplicationContext(), remoteMessage.getNotification().getTitle(), remoteMessage.getNotification().getBody(), new Intent("com.gpk17.gbrowser.message"), 1);
        }
    }

    public void showNotification(Context context, String str, String str2, Intent intent, int i) {
        NotificationCompat.Builder contentIntent = new NotificationCompat.Builder(context, "gbrowser").setSmallIcon(R.mipmap.ic_launcher).setContentTitle(str).setContentText(str2).setAutoCancel(true).setSound(RingtoneManager.getDefaultUri(2)).setContentIntent(PendingIntent.getActivity(context, i, intent, BasicMeasure.EXACTLY));
        NotificationManager notificationManager = (NotificationManager) context.getSystemService("notification");
        notificationManager.createNotificationChannel(new NotificationChannel("gbrowser", "gbrowser", 4));
        notificationManager.notify(i, contentIntent.build());
        Log.d("showNotification", "showNotification: " + i);
    }

    public static String getToken(Context context) {
        return context.getSharedPreferences("_", 0).getString("fb", "empty");
    }
}
