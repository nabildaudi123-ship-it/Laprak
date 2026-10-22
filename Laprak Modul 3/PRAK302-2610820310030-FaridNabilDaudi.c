#include <stdio.h>

int main() {
    system("cls");
    int jumlah, nilai;
    char huruf;

    printf("Berapa nilai yang ingin dimasukkan? ");
    scanf("%d", &jumlah);

    for (int i = 1; i <= jumlah; i++) {
        printf("Masukkan nilai ke-%d: ", i);
        scanf("%d", &nilai);

        if (nilai >= 80) {
            huruf = 'A';
        } else if (nilai >= 70) {
            huruf = 'B';
        } else if (nilai >= 60) {
            huruf = 'C';
        } else if (nilai >= 50) {
            huruf = 'D';
        } else {
            huruf = 'E';
        }

        printf("Hasil: %c\n", huruf);
    }

    return 0;
}