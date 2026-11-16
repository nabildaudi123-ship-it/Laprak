#include <stdio.h>

int main() {
    int n1, n2, i;
    int baris1[1000], baris2[1000];

    if (scanf("%d %d", &n1, &n2) != 2) {
        return 0;
    }

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;
    }

    if (n1 < 1 || n1 > 1000) {
        return 0;
    }

    for (i = 0; i < n1; i++) {
        scanf("%d", &baris1[i]);
    }

    for (i = 0; i < n2; i++) {
        scanf("%d", &baris2[i]);
    }

    for (i = 0; i < n1; i++) {
        if (i > 0) {
            printf(" ");
        }

        printf("%d", baris1[i] * baris2[i]);
    }

    printf("\n");

    return 0;
}