#include <stdio.h>

int main() {
    system("cls");
    int a, b, c, save, jumlah;

    printf("Jumlah yang ingin diurutkan: ");
    scanf("%d", &jumlah);

    for (int i = 1; i <= jumlah; i++) {
        printf("\nPengurutan ke-%d\n", i);
        scanf("%d %d %d", &a, &b, &c);

        if (a > b) {
            save = a;
            a = b;
            b = save;
        }

        if (a > c) {
            save = a;
            a = c;
            c = save;
        }

        if (b > c) {
            save = b;
            b = c;
            c = save;
        }

        printf("Hasil pengurutan: %d %d %d\n", a, b, c);
    }

    return 0;
}