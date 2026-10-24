package com.gpk17.gbrowser.Utils;

import android.content.Context;
import android.graphics.Bitmap;
import android.util.LruCache;
import com.android.volley.Request;
import com.android.volley.RequestQueue;
import com.android.volley.toolbox.ImageLoader;
import com.android.volley.toolbox.Volley;

/* JADX INFO: loaded from: classes.dex */
public class AppHttpSingleton {
    private static Context ctx;
    private static AppHttpSingleton instance;
    private ImageLoader imageLoader;
    private RequestQueue requestQueue;

    private AppHttpSingleton(Context context) {
        ctx = context;
        this.requestQueue = getRequestQueue();
        this.imageLoader = new ImageLoader(this.requestQueue, new ImageLoader.ImageCache() { // from class: com.gpk17.gbrowser.Utils.AppHttpSingleton.1
            private final LruCache<String, Bitmap> cache = new LruCache<>(20);

            @Override // com.android.volley.toolbox.ImageLoader.ImageCache
            public Bitmap getBitmap(String str) {
                return this.cache.get(str);
            }

            @Override // com.android.volley.toolbox.ImageLoader.ImageCache
            public void putBitmap(String str, Bitmap bitmap) {
                this.cache.put(str, bitmap);
            }
        });
    }

    public static synchronized AppHttpSingleton getInstance(Context context) {
        if (instance == null) {
            instance = new AppHttpSingleton(context);
        }
        return instance;
    }

    public RequestQueue getRequestQueue() {
        if (this.requestQueue == null) {
            this.requestQueue = Volley.newRequestQueue(ctx.getApplicationContext());
        }
        return this.requestQueue;
    }

    public <T> void addToRequestQueue(Request<T> request) {
        getRequestQueue().add(request);
    }

    public ImageLoader getImageLoader() {
        return this.imageLoader;
    }
}
