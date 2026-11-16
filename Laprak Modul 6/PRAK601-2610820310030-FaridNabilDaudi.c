#include <stdio.h>

int main() {
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);

    int m[100][100];
    
    for (int i = 0; i < baris; i++)
        for (int j = 0; j < kolom; j++)
            scanf("%d", &m[i][j]);

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d", m[i][j]);
            if (j < kolom - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}