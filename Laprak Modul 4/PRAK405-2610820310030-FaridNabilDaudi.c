#include <stdio.h>

int main() {
    system("cls");
    int a, b, jumlah;

    printf("Jumlah yang ingin diurutkan: ");
    scanf("%d", &jumlah);

    for (int i = 1; i <= jumlah; i++) {
    printf("\nPengurutan ke-%d\n", i); 
    scanf("%d", &a);
    scanf("%d", &b);

    int total = 0;
    for (int i = 1; i <= a; i++) {
        int hasil = 0;
        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, b);
            if (j > 1) printf(" + ");
            hasil += j * b;
        }
        printf(" = %d\n", hasil);
        total += hasil;
    }

    printf("%d\n", total);
}
return 0;
}