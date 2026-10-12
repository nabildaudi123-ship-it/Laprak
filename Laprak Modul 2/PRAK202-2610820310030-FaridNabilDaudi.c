#include <stdio.h>

int main() {
    
    float a, b, hasil;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%f", &b);

    hasil = a + b;

    printf("Hasil dari penjumlahan nilai pertama %g dan nilai kedua %g adalah %.2f\n", a, b, hasil);

    return 0;
}