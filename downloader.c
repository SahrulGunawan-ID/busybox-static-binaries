#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
    char *arch = NULL;
    FILE *fp;

    // Menjalankan "uname -m" untuk mendeteksi arsitektur
    fp = popen("uname -m", "r");
    if (fp == NULL) {
        fprintf(stderr, "Gagal mendeteksi arsitektur.\n");
        return 1;
    }

    char buffer[128];
    if (fgets(buffer, sizeof(buffer), fp) != NULL) {
        arch = buffer;
    }
    pclose(fp);

    // Menghapus newline dari output uname -m
    if (arch != NULL) {
        arch[strcspn(arch, "\n")] = 0;
    }

    // Menentukan URL berdasarkan arsitektur
    char *url;
    if (strcmp(arch, "armv7l") == 0 || strcmp(arch, "arm") == 0) {
        url = "https://github.com/SahrulGunawan-ID/busybox-static-binaries/raw/refs/heads/main/busybox-arm";
    } else if (strcmp(arch, "aarch64") == 0 || strcmp(arch, "arm64") == 0) {
        url = "https://github.com/SahrulGunawan-ID/busybox-static-binaries/raw/refs/heads/main/busybox-arm64";
    } else {
        fprintf(stderr, "Arsitektur tidak didukung: %s\n", arch);
        return 1;
    }

    // Menentukan path target
    char target[256];
    snprintf(target, sizeof(target), "%s/%s", getenv("HOME"), strrchr(url, '/') + 1);

    // Menjalankan wget untuk mendownload file
    char command[512];
    snprintf(command, sizeof(command), "wget -q -O %s %s", target, url);

    printf("Mengunduh dari URL: %s\n", url);
    printf("Menyimpan ke: %s\n", target);

    if (system(command) == 0) {
        printf("Download selesai.\n");
        printf("File disimpan di: %s\n", target);
    } else {
        fprintf(stderr, "Gagal mendownload file.\n");
        return 1;
    }

    return 0;
}
