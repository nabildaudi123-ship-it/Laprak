#include <stdio.h>

int main(void) {
    system("cls");
    int batas,jumlah;
    
    printf("Jumlah yang ingin diurutkan: ");
    scanf("%d", &jumlah);

    for (int i = 1; i <= jumlah; i++) {
    printf("\nPengurutan ke-%d\n", i);  
    scanf("%d", &batas);

    for (int angka = 1; angka <= batas; angka++) {
        if (angka % 2 != 0) {
            printf("%d ", angka);
        }
    }

    printf("\n");

    for (int angka = batas; angka >= 2; angka--) {
        if (angka % 2 == 0) {
            printf("%d ", angka);
        }
    }

    printf("\n");
    }       
    return 0;
}