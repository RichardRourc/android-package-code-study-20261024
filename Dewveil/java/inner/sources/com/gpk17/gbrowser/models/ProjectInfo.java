package com.gpk17.gbrowser.models;

import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class ProjectInfo {
    private static final String TAG = "ProjectInfo";
    private String adjust;
    private String appBuildDate;
    private String appDirection;
    private String appPushMessage;
    private String appUpdate;
    private String appVersion;
    private String appupdateMessage;
    private String appupdateUrl;
    private String customerServiceUrl;
    private CustomizedStyle customizedStyle;
    private int errorCode;
    private String errorMessage;
    private String errorRecord;
    private String loadingUrl;
    private String loadingUrlSha1;
    private String music;
    private int port;
    private String projectName;
    private int timeout;
    private String type;
    private String url;
    private String website;

    public ProjectInfo(String str, String str2, int i, int i2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, String str10, int i3, String str11, String str12, String str13, String str14, String str15, String str16, String str17, String str18) {
        this.projectName = str;
        this.url = str2;
        this.timeout = i;
        this.adjust = str12;
        this.port = i2;
        this.website = str3;
        this.type = str4;
        this.appUpdate = str5;
        this.appPushMessage = str6;
        this.customerServiceUrl = str7;
        this.errorRecord = str8;
        this.loadingUrl = str9;
        this.loadingUrlSha1 = str10;
        this.errorCode = i3;
        this.errorMessage = str11;
        this.music = str13;
        this.appVersion = str14;
        this.appupdateUrl = str15;
        this.appupdateMessage = str16;
        this.appDirection = str17;
        this.appBuildDate = str18;
    }

    public String getProjectName() {
        return this.projectName;
    }

    public void setProjectName(String str) {
        this.projectName = str;
    }

    public String getUrl() {
        return this.url;
    }

    public void setUrl(String str) {
        this.url = str;
    }

    public int getTimeout() {
        return this.timeout;
    }

    public void setTimeout(int i) {
        this.timeout = i;
    }

    public int getPort() {
        return this.port;
    }

    public void setPort(int i) {
        this.port = i;
    }

    public String getWebsite() {
        return this.website;
    }

    public void setWebsite(String str) {
        this.website = str;
    }

    public String getType() {
        return this.type;
    }

    public void setType(String str) {
        this.type = str;
    }

    public String getAppUpdate() {
        return this.appUpdate;
    }

    public void setAppUpdate(String str) {
        this.appUpdate = str;
    }

    public String getAppPushMessage() {
        return this.appPushMessage;
    }

    public void setAppPushMessage(String str) {
        this.appPushMessage = str;
    }

    public String getErrorRecord() {
        return this.errorRecord;
    }

    public void setErrorRecord(String str) {
        this.errorRecord = str;
    }

    public String getLoadingUrl() {
        return this.loadingUrl;
    }

    public void setLoadingUrl(String str) {
        this.loadingUrl = str;
    }

    public String getLoadingUrlSha1() {
        return this.loadingUrlSha1;
    }

    public void setLoadingUrlSha1(String str) {
        this.loadingUrlSha1 = str;
    }

    public boolean isDebugMode() {
        String str = this.type;
        return str != null && str.toLowerCase().contentEquals("debug");
    }

    public String getCustomerServiceUrl() {
        return this.customerServiceUrl;
    }

    public void setCustomerServiceUrl(String str) {
        this.customerServiceUrl = str;
    }

    public int getErrorCode() {
        return this.errorCode;
    }

    public void setErrorCode(int i) {
        this.errorCode = i;
    }

    public String getAppVersion() {
        return this.appVersion;
    }

    public String getAppUpdateUrl() {
        return this.appupdateUrl;
    }

    public String getAppUpdateMessage() {
        return this.appupdateMessage;
    }

    public String getErrorMessage() {
        return this.errorMessage;
    }

    public String getAppBuildDate() {
        return this.appBuildDate;
    }

    public void setErrorMessage(String str) {
        this.errorMessage = str;
    }

    public String getCustomizedStyle() {
        return this.customizedStyle.getStyle();
    }

    public String getCustomizedDirection() {
        return this.appDirection;
    }

    public String getCustomizedAppMusic() {
        return this.music;
    }

    public String getAdjust() {
        String str = this.adjust;
        return str == null ? "" : str;
    }

    public String getHomeUrl() {
        return this.url;
    }

    public String composeUrlWithDefaultPort(String str) {
        String str2 = TAG;
        Log.d(str2, "composeUrlWithDefaultPort >>>Begin<<<");
        if (this.port > 1) {
            String strReplaceAll = str.replaceAll("^((http://)|(https://))", "");
            Log.d(str2, "inputUrl:" + strReplaceAll);
            String[] strArrSplit = strReplaceAll.split(":");
            int i = this.port;
            if (i == 80) {
                str = String.format("http://%s", strArrSplit[0]);
            } else if (i == 443) {
                str = String.format("https://%s", strArrSplit[0]);
            } else {
                str = String.format("http://%s:%d", strArrSplit[0], Integer.valueOf(i));
            }
        }
        Log.d(str2, "composeUrlWithDefaultPort <<<End>>>");
        return str;
    }

    private class CustomizedStyle {
        private int appCaveat;
        private String appMusic;
        private String direction;
        private String style;

        public CustomizedStyle(String str, String str2, String str3, int i) {
            this.style = str;
            this.direction = str2;
            this.appMusic = str3;
            this.appCaveat = i;
        }

        public String getStyle() {
            return this.style;
        }

        public void setStyle(String str) {
            this.style = str;
        }

        public String getDirection() {
            return this.direction;
        }

        public void setDirection(String str) {
            this.direction = str;
        }

        public String getAppMusic() {
            return this.appMusic.equals("null") ? "" : this.appMusic;
        }

        public void setAppMusic(String str) {
            this.appMusic = str;
        }

        public int getAppCaveat() {
            return this.appCaveat;
        }

        public void setAppCaveat(int i) {
            this.appCaveat = i;
        }
    }
}
