#include <stdio.h>

int main() {
    system ("cls");
    int sisi1 = 4, sisi2 = 5, sisi3 = 7;
    int hargaPerMeter = 85000;

    int keliling = sisi1 + sisi2 + sisi3;
    int biaya = keliling * hargaPerMeter;

    printf("Diketahui : Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", hargaPerMeter);
    printf("Jawaban : Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", biaya);

    return 0;
}