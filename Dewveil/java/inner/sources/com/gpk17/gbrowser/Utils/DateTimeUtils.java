package com.gpk17.gbrowser.Utils;

import android.content.Context;
import android.text.format.DateFormat;
import android.util.Log;
import java.sql.Time;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.TimeZone;

/* JADX INFO: loaded from: classes.dex */
public class DateTimeUtils {
    static final String TAG = "DateTimeUtils";

    public static long convertTime2Millis(Time time) {
        Calendar calendar = Calendar.getInstance();
        calendar.setTimeInMillis(time.getTime());
        return calendar.getTimeInMillis();
    }

    public static String getCurrentTimeByFormat(String str) {
        return new SimpleDateFormat(str).format(Calendar.getInstance().getTime());
    }

    public static String getTimeStrByFormat(long j, String str) {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat(str);
        Calendar calendar = Calendar.getInstance();
        calendar.setTimeInMillis(j);
        return simpleDateFormat.format(calendar.getTime());
    }

    public static int getHourOfMillis(long j) {
        Calendar calendar = Calendar.getInstance();
        calendar.setTimeInMillis(j);
        return calendar.get(11);
    }

    public static int getMinOfMillis(long j) {
        Calendar calendar = Calendar.getInstance();
        calendar.setTimeInMillis(j);
        return calendar.get(12);
    }

    public static Date convertMillisToDate(long j) {
        Calendar calendar = Calendar.getInstance();
        calendar.setTimeInMillis(j);
        return calendar.getTime();
    }

    public static Calendar converMillisToCalendar(long j) {
        Calendar calendar = Calendar.getInstance();
        calendar.setTimeInMillis(j);
        return calendar;
    }

    public static String getYyyyMMdd() {
        return new SimpleDateFormat("yyyyMMdd").format(Calendar.getInstance().getTime());
    }

    public static String date2StringAgainstSystemFormat(Context context, Date date) {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd hh:mm a");
        return DateFormat.is24HourFormat(context) ? new SimpleDateFormat("yyyy-MM-dd HH:mm").format(date) : simpleDateFormat.format(date);
    }

    public static String date2StringAgainstSystemFormat(Context context, long j) {
        Date dateConvertMillisToDate = convertMillisToDate(j);
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd hh:mm a");
        return DateFormat.is24HourFormat(context) ? new SimpleDateFormat("yyyy-MM-dd HH:mm").format(dateConvertMillisToDate) : simpleDateFormat.format(dateConvertMillisToDate);
    }

    public static String[] dateString(Date date) {
        return new String[]{new SimpleDateFormat("yyyy-MM-dd").format(date), new SimpleDateFormat("HH:mm").format(date)};
    }

    public static long getTimeOfDayInMillis() {
        Calendar calendar = Calendar.getInstance(TimeZone.getTimeZone("UTC"));
        int i = calendar.get(11);
        return (((((i * 60) + calendar.get(12)) * 60) + calendar.get(13)) * 1000) + calendar.get(14);
    }

    public static long getCurrentTimeStamp() {
        return new Date(Calendar.getInstance().getTime().getTime()).getTime();
    }

    public static java.sql.Date getCurrentDate() {
        return new java.sql.Date(getCurrentTimeStamp());
    }

    public static int getTimeOfMillis(long j, int i) {
        Calendar calendar = Calendar.getInstance(TimeZone.getTimeZone("UTC"));
        calendar.setTimeInMillis(j);
        return calendar.get(i);
    }

    public static int[] getYMDOfMillis(long j) {
        Calendar calendar = Calendar.getInstance(TimeZone.getTimeZone("UTC"));
        calendar.setTimeInMillis(j);
        return new int[]{calendar.get(1), calendar.get(2), calendar.get(5)};
    }

    public static String[] getDateString(long j) {
        return dateString(convertMillisToDate(j));
    }

    public static long getTimeStampOfYMD(int i, int i2, int i3) {
        Calendar calendar = Calendar.getInstance(TimeZone.getTimeZone("UTC"));
        calendar.set(1, i);
        calendar.set(2, i2);
        calendar.set(5, i3);
        return calendar.getTimeInMillis();
    }

    public static long convertDateStrToMillis(String str) {
        if (str != null) {
            try {
                return new SimpleDateFormat("yyyy-MM-dd").parse(str).getTime();
            } catch (ParseException e) {
                Log.d(TAG, "convertDateStrToMillis.Exception:" + Utils.printStackTrace(e));
            }
        }
        return -1L;
    }

    public static int firstDayOfWeek(int i, int i2) {
        try {
            if (i < 1900 || i > 2100) {
                throw new NumberFormatException("year not in range");
            }
            if (i2 < 1 || i2 > 12) {
                throw new NumberFormatException("year not in range");
            }
            Calendar calendar = Calendar.getInstance();
            calendar.set(1, i);
            calendar.set(2, i2 - 1);
            calendar.set(5, 1);
            return calendar.get(7);
        } catch (Exception e) {
            Log.d(TAG, "fistDayOfWeek.Exception:" + Utils.printStackTrace(e));
            return -1;
        }
    }

    public static int maxDayOfMonth(int i, int i2) {
        if (i < 1900 || i > 2100) {
            throw new NumberFormatException("year not in range");
        }
        if (i2 < 1 || i2 > 12) {
            throw new NumberFormatException("year not in range");
        }
        Calendar calendar = Calendar.getInstance();
        calendar.set(1, i);
        calendar.set(2, i2 - 1);
        calendar.set(5, 1);
        return calendar.getActualMaximum(5);
    }
}
