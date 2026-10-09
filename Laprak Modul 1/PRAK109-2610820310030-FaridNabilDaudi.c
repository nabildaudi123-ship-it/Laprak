#include <stdio.h>

int main() {
    system("cls");
    char *namaPahlawan[] = {"Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"};
    int pasukan = 958730;
    int pahlawan = sizeof(namaPahlawan) / sizeof(namaPahlawan[0]);

    int bagi = pasukan / pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan);
    printf("Jumlah pahlawan = %d\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", bagi);

    return 0;
}
