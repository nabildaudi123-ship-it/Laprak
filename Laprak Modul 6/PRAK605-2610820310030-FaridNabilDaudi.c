#include <stdio.h>

int main() {
    int n, i, j, k;
    int A[100][100], B[100][100], hasil[100][100];

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    if (n < 1 || n > 100) {
        return 0;
    }

    printf("Matriks A\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matriks B\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            hasil[i][j] = 0;

            for (k = 0; k < n; k++) {
                hasil[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matriks AXB\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j > 0) {
                printf(" ");
            }

            printf("%d", hasil[i][j]);
        }

        printf("\n");
    }

    return 0;
}