#include <stdio.h>

int main(void) {
    system("cls");
    int pertama, kedua, langkah, jumlah,jumlah2;

    printf("Jumlah yang ingin diurutkan: ");
    scanf("%d", &jumlah2);

    for (int i = 1; i <= jumlah2; i++) {
    printf("\nPengurutan ke-%d\n", i); 
    scanf("%d %d", &pertama, &kedua);

    if (pertama < kedua) {
        langkah = 1;
        jumlah = kedua - pertama;
    } else {
        langkah = -1;
        jumlah = pertama - kedua;
    }

    for (int i = 0; i <= jumlah; i++) {
        if (i > 0) {
            printf(" - ");
        }

        printf("%d %d", pertama, kedua);

        if (i < jumlah) {
            pertama += langkah;
            kedua -= langkah;
        }
    }

    printf("\n");
    }
    return 0;
}