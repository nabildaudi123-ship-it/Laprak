#include <stdio.h>

int main() {
    system("cls");
    char nama[100], nim[30], kelas[30], ttl[100];
    char alamat[200], hobby[100], no_hp[20];

    printf("=== INPUT BIODATA ===\n");
    printf("Nama                 : ");
    scanf(" %99[^\n]", nama);
    printf("NIM                  : ");
    scanf(" %29[^\n]", nim);
    printf("Kelas Paralel        : ");
    scanf(" %29[^\n]", kelas);
    printf("Tempat/Tanggal Lahir : ");
    scanf(" %99[^\n]", ttl);
    printf("Alamat               : ");
    scanf(" %199[^\n]", alamat);
    printf("Hobby                : ");
    scanf(" %99[^\n]", hobby);
    printf("No. HP               : ");
    scanf(" %19[^\n]", no_hp);

    printf("=== OUTPUT BIODATA ===\n");
    printf("Nama                 : %s\n", nama);
    printf("NIM                  : %s\n", nim);
    printf("Kelas Paralel        : %s\n", kelas);
    printf("Tempat/Tanggal Lahir : %s\n", ttl);
    printf("Alamat               : %s\n", alamat);
    printf("Hobby                : %s\n", hobby);
    printf("No. HP               : %s\n", no_hp);

    return 0;
}