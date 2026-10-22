#include <stdio.h>

int main() {
    int jumlah, angka;
    system("cls");
    printf("Masukan berapa bilangan yang ingin dimasukkan: ");
    scanf("%d", &jumlah);

    for (int i = 1; i <= jumlah; i++) {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%d", &angka);

        if (angka > 0) {
            printf("positif\n");
        } else if (angka < 0) {
            printf("negatif\n");
        } else {
            printf("nol\n");
        }
    }

    return 0;
}