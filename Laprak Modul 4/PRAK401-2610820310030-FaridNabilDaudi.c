#include <stdio.h>

int main(void) {
    system("cls");
    int kelipatan,jumlah;
    char simbol;

    printf("Jumlah yang ingin diurutkan: ");
    scanf("%d", &jumlah);

    for (int i = 1; i <= jumlah; i++) {
        printf("\nPengurutan ke-%d\n", i);
        printf("Masukkan kelipatan: ");
        scanf("%d", &kelipatan);
        printf("Masukkan simbol: ");
        scanf(" %c", &simbol);


    if (kelipatan <= 0) {
        printf("Kelipatan harus lebih dari 0\n");
    } else {
        for (int angka = 1; angka <= 50; angka++) {
            if (angka % kelipatan == 0) {
                printf("%c ", simbol);
            } else {
                printf("%d ", angka);
            }
        }
        printf("\n");
    }

}
return 0;
}