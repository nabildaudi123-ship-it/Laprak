#include <stdio.h>

int main() {
    int jumlahRuangan;
    int zetsu[1000];

    scanf("%d", &jumlahRuangan);

    for (int i = 0; i < jumlahRuangan; i++) {
        scanf("%d", &zetsu[i]);
    }

    for (int i = 0; i < jumlahRuangan; i++) {
        int hasil = zetsu[i] * (i + 1);

        if (i > 0) {
            printf(" ");
        }

        printf("%d", hasil);
    }

    printf("\n");
    return 0;
}