# BusyBox Static Binaries

## Versi Tersedia
Repository ini menyediakan **BusyBox static binaries** untuk platform berikut:
.<br>
├── busybox-arm<br>
├── busybox-arm_new<br>
└── busybox-arm64<br>

1 directory, 2 files<br>
 root@localhost  ~  #  ➜ # file *
 ````
busybox-arm:   ELF 32-bit LSB executable, ARM, EABI5 version 1 (SYSV), statically linked, for Android 21, built by NDK r15c (4203891), stripped
busybox-arm64: ELF 64-bit LSB executable, ARM aarch64, version 1 (SYSV), statically linked, for Android 21, built by NDK r15c (4203891), stripped
````
 root@localhost  ~  #  ➜ #<br>

 ### Detail Binaries
- **busybox-arm**:  
  ELF 32-bit LSB executable, ARM, EABI5 version 1 (SYSV), statically linked, for Android 21, built by NDK r15c (4203891), stripped.

- **busybox-arm64**:  
  ELF 64-bit LSB executable, ARM aarch64, version 1 (SYSV), statically linked, for Android 21, built by NDK r15c (4203891), stripped.

## Cara Penggunaan
1. **Pilih versi yang sesuai dengan arsitektur perangkat Anda:**
   - Untuk perangkat 32-bit, gunakan `busybox-arm`.
   - Untuk perangkat 64-bit, gunakan `busybox-arm64`.

2. **Jalankan BusyBox:**
   - Unduh file binary dari repositori ini.
   - Beri izin eksekusi pada file:
     ```bash
     chmod +x busybox-arm
     ```
   - Jalankan binary:
     ```bash
     ./busybox-arm
     ```

## Terima Kasih
Terima kasih kepada semua yang telah mendukung dan menggunakan binary ini. Jika Anda memiliki saran atau masalah, jangan ragu untuk menghubungi saya melalui halaman **Issues** di GitHub ini.

## Link GitHub
[BusyBox Static Binaries Repository](https://github.com/SahrulGunawan-ID/busybox-static-binaries)

 
