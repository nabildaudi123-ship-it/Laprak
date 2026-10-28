#include <stdio.h>

int main() {
    system("cls");
    int pilihan;
    double a, b, hasil;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator FARID NABIL DAUDI\n");
            break;
        }

        if (pilihan < 1 || pilihan > 4) {
            printf("Input anda salah, silahkan coba lagi\n\n");
            continue;
        }

        printf("Masukkan nilai pertama : ");
        scanf("%lf", &a);
        printf("Masukkan nilai kedua : ");
        scanf("%lf", &b);

        switch (pilihan) {
            case 1:
                hasil = a + b;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
                break;
            case 2:
                hasil = a - b;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
                break;
            case 3:
                hasil = a * b;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
                break;
            case 4:
                if (b == 0) {
                    printf("Pembagian dengan nol tidak bisa dilakukan\n");
                } else {
                    hasil = a / b;
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
                }
                break;
        }printf("\n");
    }
    return 0;
}