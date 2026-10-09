#include <stdio.h>

int main() {
    system("cls");
    int hargaA = 400000;
    int hargaB = 350000;
    int diskonA = 13;
    int diskonB = 21;

    int hasilA = hargaA - (hargaA * diskonA / 100);
    int hasilB = hargaB - (hargaB * diskonB / 100);

    printf("Harga sepatu A adalah %d\n", hargaA);
    printf("Harga sepatu B adalah %d\n", hargaB);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", diskonA, hasilA);
    printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %d\n", diskonB, hasilB);

    return 0;
}
