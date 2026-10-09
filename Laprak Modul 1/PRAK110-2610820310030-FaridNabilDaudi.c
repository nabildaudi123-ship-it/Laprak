#include <stdio.h>
#include <math.h>

int main() {
    system("cls");
    int alas = 5, tinggi = 12;
    int sisiB = sqrt(alas * alas + tinggi * tinggi);

    printf("Diketahui : \n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Jawab : \n");
    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %d cm\n", sisiB);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %d cm\n", alas + tinggi + sisiB);
    printf("Luas = %d cm\n", alas * tinggi / 2);

    return 0;
}
