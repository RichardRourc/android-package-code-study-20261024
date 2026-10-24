package kotlin.collections;

import kotlin.Metadata;
import kotlin.UByte;
import kotlin.UByteArray;
import kotlin.UIntArray;
import kotlin.ULongArray;
import kotlin.UShort;
import kotlin.UShortArray;
import kotlin.UnsignedKt;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: UArraySorting.kt */
/* JADX INFO: loaded from: classes.dex */
@Metadata(d1 = {"\u00000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0010\u001a*\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003ø\u0001\u0000¢\u0006\u0004\b\u0006\u0010\u0007\u001a*\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\b2\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003ø\u0001\u0000¢\u0006\u0004\b\t\u0010\n\u001a*\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u000b2\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003ø\u0001\u0000¢\u0006\u0004\b\f\u0010\r\u001a*\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u000e2\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003ø\u0001\u0000¢\u0006\u0004\b\u000f\u0010\u0010\u001a*\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003ø\u0001\u0000¢\u0006\u0004\b\u0013\u0010\u0014\u001a*\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0002\u001a\u00020\b2\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003ø\u0001\u0000¢\u0006\u0004\b\u0015\u0010\u0016\u001a*\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0002\u001a\u00020\u000b2\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003ø\u0001\u0000¢\u0006\u0004\b\u0017\u0010\u0018\u001a*\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0002\u001a\u00020\u000e2\u0006\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0001H\u0003ø\u0001\u0000¢\u0006\u0004\b\u0019\u0010\u001a\u001a*\u0010\u001b\u001a\u00020\u00122\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\u00012\u0006\u0010\u001d\u001a\u00020\u0001H\u0001ø\u0001\u0000¢\u0006\u0004\b\u001e\u0010\u0014\u001a*\u0010\u001b\u001a\u00020\u00122\u0006\u0010\u0002\u001a\u00020\b2\u0006\u0010\u001c\u001a\u00020\u00012\u0006\u0010\u001d\u001a\u00020\u0001H\u0001ø\u0001\u0000¢\u0006\u0004\b\u001f\u0010\u0016\u001a*\u0010\u001b\u001a\u00020\u00122\u0006\u0010\u0002\u001a\u00020\u000b2\u0006\u0010\u001c\u001a\u00020\u00012\u0006\u0010\u001d\u001a\u00020\u0001H\u0001ø\u0001\u0000¢\u0006\u0004\b \u0010\u0018\u001a*\u0010\u001b\u001a\u00020\u00122\u0006\u0010\u0002\u001a\u00020\u000e2\u0006\u0010\u001c\u001a\u00020\u00012\u0006\u0010\u001d\u001a\u00020\u0001H\u0001ø\u0001\u0000¢\u0006\u0004\b!\u0010\u001a\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\""}, d2 = {"partition", "", "array", "Lkotlin/UByteArray;", "left", "right", "partition-4UcCI2c", "([BII)I", "Lkotlin/UIntArray;", "partition-oBK06Vg", "([III)I", "Lkotlin/ULongArray;", "partition--nroSd4", "([JII)I", "Lkotlin/UShortArray;", "partition-Aa5vz7o", "([SII)I", "quickSort", "", "quickSort-4UcCI2c", "([BII)V", "quickSort-oBK06Vg", "([III)V", "quickSort--nroSd4", "([JII)V", "quickSort-Aa5vz7o", "([SII)V", "sortArray", "fromIndex", "toIndex", "sortArray-4UcCI2c", "sortArray-oBK06Vg", "sortArray--nroSd4", "sortArray-Aa5vz7o", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class UArraySortingKt {
    /* JADX INFO: renamed from: partition-4UcCI2c, reason: not valid java name */
    private static final int m512partition4UcCI2c(byte[] bArr, int i, int i2) {
        int i3;
        byte bM139getw2LRezQ = UByteArray.m139getw2LRezQ(bArr, (i + i2) / 2);
        while (i <= i2) {
            while (true) {
                int iM139getw2LRezQ = UByteArray.m139getw2LRezQ(bArr, i) & UByte.MAX_VALUE;
                i3 = bM139getw2LRezQ & UByte.MAX_VALUE;
                if (Intrinsics.compare(iM139getw2LRezQ, i3) >= 0) {
                    break;
                }
                i++;
            }
            while (Intrinsics.compare(UByteArray.m139getw2LRezQ(bArr, i2) & UByte.MAX_VALUE, i3) > 0) {
                i2--;
            }
            if (i <= i2) {
                byte bM139getw2LRezQ2 = UByteArray.m139getw2LRezQ(bArr, i);
                UByteArray.m144setVurrAj0(bArr, i, UByteArray.m139getw2LRezQ(bArr, i2));
                UByteArray.m144setVurrAj0(bArr, i2, bM139getw2LRezQ2);
                i++;
                i2--;
            }
        }
        return i;
    }

    /* JADX INFO: renamed from: quickSort-4UcCI2c, reason: not valid java name */
    private static final void m516quickSort4UcCI2c(byte[] bArr, int i, int i2) {
        int iM512partition4UcCI2c = m512partition4UcCI2c(bArr, i, i2);
        int i3 = iM512partition4UcCI2c - 1;
        if (i < i3) {
            m516quickSort4UcCI2c(bArr, i, i3);
        }
        if (iM512partition4UcCI2c < i2) {
            m516quickSort4UcCI2c(bArr, iM512partition4UcCI2c, i2);
        }
    }

    /* JADX INFO: renamed from: partition-Aa5vz7o, reason: not valid java name */
    private static final int m513partitionAa5vz7o(short[] sArr, int i, int i2) {
        int i3;
        short sM399getMh2AYeg = UShortArray.m399getMh2AYeg(sArr, (i + i2) / 2);
        while (i <= i2) {
            while (true) {
                int iM399getMh2AYeg = UShortArray.m399getMh2AYeg(sArr, i) & UShort.MAX_VALUE;
                i3 = sM399getMh2AYeg & UShort.MAX_VALUE;
                if (Intrinsics.compare(iM399getMh2AYeg, i3) >= 0) {
                    break;
                }
                i++;
            }
            while (Intrinsics.compare(UShortArray.m399getMh2AYeg(sArr, i2) & UShort.MAX_VALUE, i3) > 0) {
                i2--;
            }
            if (i <= i2) {
                short sM399getMh2AYeg2 = UShortArray.m399getMh2AYeg(sArr, i);
                UShortArray.m404set01HTLdE(sArr, i, UShortArray.m399getMh2AYeg(sArr, i2));
                UShortArray.m404set01HTLdE(sArr, i2, sM399getMh2AYeg2);
                i++;
                i2--;
            }
        }
        return i;
    }

    /* JADX INFO: renamed from: quickSort-Aa5vz7o, reason: not valid java name */
    private static final void m517quickSortAa5vz7o(short[] sArr, int i, int i2) {
        int iM513partitionAa5vz7o = m513partitionAa5vz7o(sArr, i, i2);
        int i3 = iM513partitionAa5vz7o - 1;
        if (i < i3) {
            m517quickSortAa5vz7o(sArr, i, i3);
        }
        if (iM513partitionAa5vz7o < i2) {
            m517quickSortAa5vz7o(sArr, iM513partitionAa5vz7o, i2);
        }
    }

    /* JADX INFO: renamed from: partition-oBK06Vg, reason: not valid java name */
    private static final int m514partitionoBK06Vg(int[] iArr, int i, int i2) {
        int iM217getpVg5ArA = UIntArray.m217getpVg5ArA(iArr, (i + i2) / 2);
        while (i <= i2) {
            while (UnsignedKt.uintCompare(UIntArray.m217getpVg5ArA(iArr, i), iM217getpVg5ArA) < 0) {
                i++;
            }
            while (UnsignedKt.uintCompare(UIntArray.m217getpVg5ArA(iArr, i2), iM217getpVg5ArA) > 0) {
                i2--;
            }
            if (i <= i2) {
                int iM217getpVg5ArA2 = UIntArray.m217getpVg5ArA(iArr, i);
                UIntArray.m222setVXSXFK8(iArr, i, UIntArray.m217getpVg5ArA(iArr, i2));
                UIntArray.m222setVXSXFK8(iArr, i2, iM217getpVg5ArA2);
                i++;
                i2--;
            }
        }
        return i;
    }

    /* JADX INFO: renamed from: quickSort-oBK06Vg, reason: not valid java name */
    private static final void m518quickSortoBK06Vg(int[] iArr, int i, int i2) {
        int iM514partitionoBK06Vg = m514partitionoBK06Vg(iArr, i, i2);
        int i3 = iM514partitionoBK06Vg - 1;
        if (i < i3) {
            m518quickSortoBK06Vg(iArr, i, i3);
        }
        if (iM514partitionoBK06Vg < i2) {
            m518quickSortoBK06Vg(iArr, iM514partitionoBK06Vg, i2);
        }
    }

    /* JADX INFO: renamed from: partition--nroSd4, reason: not valid java name */
    private static final int m511partitionnroSd4(long[] jArr, int i, int i2) {
        long jM295getsVKNKU = ULongArray.m295getsVKNKU(jArr, (i + i2) / 2);
        while (i <= i2) {
            while (UnsignedKt.ulongCompare(ULongArray.m295getsVKNKU(jArr, i), jM295getsVKNKU) < 0) {
                i++;
            }
            while (UnsignedKt.ulongCompare(ULongArray.m295getsVKNKU(jArr, i2), jM295getsVKNKU) > 0) {
                i2--;
            }
            if (i <= i2) {
                long jM295getsVKNKU2 = ULongArray.m295getsVKNKU(jArr, i);
                ULongArray.m300setk8EXiF4(jArr, i, ULongArray.m295getsVKNKU(jArr, i2));
                ULongArray.m300setk8EXiF4(jArr, i2, jM295getsVKNKU2);
                i++;
                i2--;
            }
        }
        return i;
    }

    /* JADX INFO: renamed from: quickSort--nroSd4, reason: not valid java name */
    private static final void m515quickSortnroSd4(long[] jArr, int i, int i2) {
        int iM511partitionnroSd4 = m511partitionnroSd4(jArr, i, i2);
        int i3 = iM511partitionnroSd4 - 1;
        if (i < i3) {
            m515quickSortnroSd4(jArr, i, i3);
        }
        if (iM511partitionnroSd4 < i2) {
            m515quickSortnroSd4(jArr, iM511partitionnroSd4, i2);
        }
    }

    /* JADX INFO: renamed from: sortArray-4UcCI2c, reason: not valid java name */
    public static final void m520sortArray4UcCI2c(byte[] array, int i, int i2) {
        Intrinsics.checkNotNullParameter(array, "array");
        m516quickSort4UcCI2c(array, i, i2 - 1);
    }

    /* JADX INFO: renamed from: sortArray-Aa5vz7o, reason: not valid java name */
    public static final void m521sortArrayAa5vz7o(short[] array, int i, int i2) {
        Intrinsics.checkNotNullParameter(array, "array");
        m517quickSortAa5vz7o(array, i, i2 - 1);
    }

    /* JADX INFO: renamed from: sortArray-oBK06Vg, reason: not valid java name */
    public static final void m522sortArrayoBK06Vg(int[] array, int i, int i2) {
        Intrinsics.checkNotNullParameter(array, "array");
        m518quickSortoBK06Vg(array, i, i2 - 1);
    }

    /* JADX INFO: renamed from: sortArray--nroSd4, reason: not valid java name */
    public static final void m519sortArraynroSd4(long[] array, int i, int i2) {
        Intrinsics.checkNotNullParameter(array, "array");
        m515quickSortnroSd4(array, i, i2 - 1);
    }
}
