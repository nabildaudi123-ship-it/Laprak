#include <stdio.h>
#include <string.h>

int main() {
    char kalimat1[1001], kalimat2[1001];
    int i, panjang;
    int bintang = 0, pagar = 0;

    if (fgets(kalimat1, sizeof(kalimat1), stdin) == NULL) {
        return 0;
    }

    if (fgets(kalimat2, sizeof(kalimat2), stdin) == NULL) {
        return 0;
    }

    kalimat1[strcspn(kalimat1, "\r\n")] = '\0';
    kalimat2[strcspn(kalimat2, "\r\n")] = '\0';

    if (strlen(kalimat1) != strlen(kalimat2)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    panjang = strlen(kalimat1);

    for (i = 0; i < panjang; i++) {
        if (kalimat1[i] == ' ' && kalimat2[i] == ' ') {
            printf(" ");
        } else if (kalimat1[i] == kalimat2[i]) {
            printf("*");
            bintang++;
        } else {
            printf("#");
            pagar++;
        }
    }

    printf("\n* = %d\n", bintang);
    printf("# = %d\n", pagar);

    if (bintang > pagar) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }

    return 0;
}