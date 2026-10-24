package androidx.core.smain.utils;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.InputStreamReader;
import java.net.InetSocketAddress;
import java.net.Socket;

/* JADX INFO: loaded from: classes2.dex */
public final class FridaDetector {
    private static FridaDetector m_instance;

    public static FridaDetector getInstance() {
        if (m_instance == null) {
            m_instance = new FridaDetector();
        }
        return m_instance;
    }

    public boolean isFridaDetected() {
        return getScore() >= 5;
    }

    private int getScore() {
        int i = checkFridaPorts() ? 3 : 0;
        if (checkFridaProcess()) {
            i += 5;
        }
        if (checkMaps()) {
            i += 5;
        }
        if (checkThreads()) {
            i += 5;
        }
        return checkTracerPid() ? i + 2 : i;
    }

    public boolean checkFridaPorts() throws Throwable {
        int[] iArr = {27042, 27043};
        for (int i = 0; i < 2; i++) {
            int i2 = iArr[i];
            Socket socket = null;
            try {
                Socket socket2 = new Socket();
                try {
                    socket2.connect(new InetSocketAddress("127.0.0.1", i2), 100);
                    try {
                        socket2.close();
                        return true;
                    } catch (Exception unused) {
                        return true;
                    }
                } catch (Exception unused2) {
                    socket = socket2;
                    if (socket != null) {
                        try {
                            socket.close();
                        } catch (Exception unused3) {
                        }
                    }
                } catch (Throwable th) {
                    th = th;
                    socket = socket2;
                    if (socket != null) {
                        try {
                            socket.close();
                        } catch (Exception unused4) {
                        }
                    }
                    throw th;
                }
            } catch (Exception unused5) {
            } catch (Throwable th2) {
                th = th2;
            }
        }
        return false;
    }

    public boolean checkFridaProcess() throws Throwable {
        BufferedReader bufferedReader;
        Throwable th;
        String lowerCase;
        BufferedReader bufferedReader2 = null;
        try {
            try {
                bufferedReader = new BufferedReader(new InputStreamReader(Runtime.getRuntime().exec("ps").getInputStream()));
                do {
                    try {
                        String line = bufferedReader.readLine();
                        if (line != null) {
                            lowerCase = line.toLowerCase();
                            if (lowerCase.contains("frida")) {
                                try {
                                    bufferedReader.close();
                                } catch (Exception unused) {
                                }
                                return true;
                            }
                            if (lowerCase.contains("gadget")) {
                                try {
                                    bufferedReader.close();
                                } catch (Exception unused2) {
                                }
                                return true;
                            }
                        } else {
                            bufferedReader.close();
                        }
                    } catch (Exception unused3) {
                        bufferedReader2 = bufferedReader;
                        if (bufferedReader2 == null) {
                            return false;
                        }
                        bufferedReader2.close();
                    } catch (Throwable th2) {
                        th = th2;
                        if (bufferedReader != null) {
                            try {
                                bufferedReader.close();
                            } catch (Exception unused4) {
                            }
                        }
                        throw th;
                    }
                    return false;
                } while (!lowerCase.contains("gum-js"));
                bufferedReader.close();
                return true;
            } catch (Exception unused5) {
                return false;
            }
        } catch (Exception unused6) {
        } catch (Throwable th3) {
            bufferedReader = null;
            th = th3;
        }
    }

    public boolean checkMaps() throws Throwable {
        BufferedReader bufferedReader;
        Throwable th;
        String lowerCase;
        BufferedReader bufferedReader2 = null;
        try {
            try {
                bufferedReader = new BufferedReader(new FileReader("/proc/self/maps"));
                do {
                    try {
                        String line = bufferedReader.readLine();
                        if (line != null) {
                            lowerCase = line.toLowerCase();
                            if (lowerCase.contains("frida")) {
                                try {
                                    bufferedReader.close();
                                } catch (Exception unused) {
                                }
                                return true;
                            }
                            if (lowerCase.contains("gadget")) {
                                try {
                                    bufferedReader.close();
                                } catch (Exception unused2) {
                                }
                                return true;
                            }
                            if (lowerCase.contains("gum-js")) {
                                try {
                                    bufferedReader.close();
                                } catch (Exception unused3) {
                                }
                                return true;
                            }
                            if (lowerCase.contains("libfrida")) {
                                try {
                                    bufferedReader.close();
                                } catch (Exception unused4) {
                                }
                                return true;
                            }
                        } else {
                            bufferedReader.close();
                        }
                    } catch (Exception unused5) {
                        bufferedReader2 = bufferedReader;
                        if (bufferedReader2 == null) {
                            return false;
                        }
                        bufferedReader2.close();
                    } catch (Throwable th2) {
                        th = th2;
                        if (bufferedReader != null) {
                            try {
                                bufferedReader.close();
                            } catch (Exception unused6) {
                            }
                        }
                        throw th;
                    }
                    return false;
                } while (!lowerCase.contains("frida-agent"));
                bufferedReader.close();
                return true;
            } catch (Exception unused7) {
                return false;
            }
        } catch (Exception unused8) {
        } catch (Throwable th3) {
            bufferedReader = null;
            th = th3;
        }
    }

    public boolean checkThreads() throws Throwable {
        try {
            File[] fileArrListFiles = new File("/proc/self/task").listFiles();
            if (fileArrListFiles == null) {
                return false;
            }
            for (File file : fileArrListFiles) {
                File file2 = new File(file, "comm");
                if (file2.exists()) {
                    BufferedReader bufferedReader = null;
                    try {
                        BufferedReader bufferedReader2 = new BufferedReader(new FileReader(file2));
                        try {
                            String line = bufferedReader2.readLine();
                            if (line != null) {
                                String lowerCase = line.toLowerCase();
                                if (lowerCase.contains("gum-js")) {
                                    try {
                                        bufferedReader2.close();
                                    } catch (Exception unused) {
                                    }
                                    return true;
                                }
                                if (lowerCase.contains("gmain")) {
                                    try {
                                        bufferedReader2.close();
                                    } catch (Exception unused2) {
                                    }
                                    return true;
                                }
                                if (lowerCase.contains("frida")) {
                                    try {
                                        bufferedReader2.close();
                                    } catch (Exception unused3) {
                                    }
                                    return true;
                                }
                                if (lowerCase.contains("pool-frida")) {
                                    try {
                                        bufferedReader2.close();
                                    } catch (Exception unused4) {
                                    }
                                    return true;
                                }
                            }
                            try {
                                bufferedReader2.close();
                            } catch (Exception unused5) {
                            }
                        } catch (Throwable th) {
                            th = th;
                            bufferedReader = bufferedReader2;
                            if (bufferedReader != null) {
                                try {
                                    bufferedReader.close();
                                } catch (Exception unused6) {
                                }
                            }
                            throw th;
                        }
                    } catch (Throwable th2) {
                        th = th2;
                    }
                }
            }
        } catch (Exception unused7) {
        }
        return false;
    }

    public boolean checkTracerPid() throws Throwable {
        String line;
        BufferedReader bufferedReader = null;
        try {
            try {
                BufferedReader bufferedReader2 = new BufferedReader(new FileReader("/proc/self/status"));
                do {
                    try {
                        line = bufferedReader2.readLine();
                        if (line == null) {
                            bufferedReader2.close();
                        }
                    } catch (Exception unused) {
                        bufferedReader = bufferedReader2;
                        if (bufferedReader == null) {
                            return false;
                        }
                        bufferedReader.close();
                    } catch (Throwable th) {
                        th = th;
                        bufferedReader = bufferedReader2;
                        if (bufferedReader != null) {
                            try {
                                bufferedReader.close();
                            } catch (Exception unused2) {
                            }
                        }
                        throw th;
                    }
                    return false;
                } while (!line.startsWith("TracerPid:"));
                boolean z = !"0".equals(line.replace("TracerPid:", "").trim());
                try {
                    bufferedReader2.close();
                } catch (Exception unused3) {
                }
                return z;
            } catch (Exception unused4) {
                return false;
            }
        } catch (Exception unused5) {
        } catch (Throwable th2) {
            th = th2;
        }
    }
}
