package com.google.firebase.messaging;

import java.util.Locale;

/* JADX INFO: compiled from: com.google.firebase:firebase-messaging@@22.0.0 */
/* JADX INFO: loaded from: classes.dex */
public final class SendException extends Exception {
    public static final int ERROR_INVALID_PARAMETERS = 1;
    public static final int ERROR_SIZE = 2;
    public static final int ERROR_TOO_MANY_MESSAGES = 4;
    public static final int ERROR_TTL_EXCEEDED = 3;
    public static final int ERROR_UNKNOWN = 0;
    private final int errorCode;

    SendException(String str) {
        super(str);
        this.errorCode = parseErrorCode(str);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:23:0x0048  */
    private int parseErrorCode(String str) {
        byte b;
        if (str == null) {
            return 0;
        }
        switch (str.toLowerCase(Locale.US)) {
            case "service_not_available":
                b = 3;
                break;
            case "toomanymessages":
                b = 4;
                break;
            case "invalid_parameters":
                b = 0;
                break;
            case "messagetoobig":
                b = 2;
                break;
            case "missing_to":
                b = 1;
                break;
            default:
                b = -1;
                break;
        }
        if (b == 0 || b == 1) {
            return 1;
        }
        if (b == 2) {
            return 2;
        }
        if (b != 3) {
            return b != 4 ? 0 : 4;
        }
        return 3;
    }

    public int getErrorCode() {
        return this.errorCode;
    }
}
