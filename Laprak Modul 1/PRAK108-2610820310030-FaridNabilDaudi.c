#include <stdio.h>

int main() {
    system("cls");
    int putaran = 5;
    int jarak = 14;
    float pi = 3.14;

    float keliling = jarak * 1.0f / putaran;
    float jariJari = keliling / (2 * pi);

    printf("Diketahui : Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", jarak);
    printf("Jawaban : Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer.\n", jariJari);

    return 0;
}
