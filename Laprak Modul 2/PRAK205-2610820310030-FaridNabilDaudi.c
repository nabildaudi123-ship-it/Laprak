#include <stdio.h>
#include <math.h>

int main() {
    int a, b, alas, tinggi, keliling;
    double luas;

    scanf("%d %d", &a, &b);

    tinggi = a;
    alas = (int)(sqrt(b * b - a * a) + 0.5);
    keliling = alas + tinggi + b;
    luas = alas * tinggi / 2.0;

    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %g cm^2\n", luas);

    return 0;
}