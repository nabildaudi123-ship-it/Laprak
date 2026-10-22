#include <stdio.h>

int main() {
    system("cls");
    int jumlah, total, hari, jam, menit, detik;

    printf("Jumlah yang ingin dikonversi: ");
    scanf("%d", &jumlah);

    for (int i = 1; i <= jumlah; i++) {
        printf("Masukkan jumlah detik ke-%d: ", i);
        scanf("%d", &total);

        hari = total / 86400;
        jam = (total % 86400) / 3600;
        menit = (total % 3600) / 60;
        detik = total % 60;

        if (hari > 0) {
            printf("%d hari %02d:%02d:%02d\n",
                   hari, jam, menit, detik);
        } else {
            printf("%02d:%02d:%02d\n", jam, menit, detik);
        }
    }

    return 0;
}