package com.fasterxml.jackson.core.util;

/* JADX INFO: loaded from: classes.dex */
public interface JacksonFeature {
    boolean enabledByDefault();

    boolean enabledIn(int i);

    int getMask();
}
