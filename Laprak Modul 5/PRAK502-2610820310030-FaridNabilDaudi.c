#include <stdio.h>

int mutlak(int angka) {
    if (angka < 0) {
        return -angka;
    }
    return angka;
}

int hitung(int nilai1, int nilai2) {
    return mutlak(nilai1 - nilai2);
}

int main() {
    int x1, y1, x2, y2;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int jarak = hitung(x1, x2) + hitung(y1, y2);
    printf("%d\n", jarak);

    return 0;
}