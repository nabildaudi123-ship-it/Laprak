#include <stdio.h>

int main() {
    system("cls");
    int jumlah, a;
    printf("Masukan berapa jumlah angka yang ingin dimasukkan: ");
    scanf("%d", &jumlah);

    for (int i = 1; i <= jumlah; i++) {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%d", &a);

    if (a == 0) {
        printf("Nol\n");
    } else if (a < 10) {
        printf("Satuan\n");
    } else if (a == 10) {
        printf("Puluhan\n");
    } else if (a >= 11 && a <= 19) {
        printf("Belasan\n");
    } else if (a >= 20 && a <= 99) {
        printf("Puluhan \n");
    } else {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }
}
return 0;
}