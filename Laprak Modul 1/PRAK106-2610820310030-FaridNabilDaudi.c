#include <stdio.h>

int main() {
    system("cls");
    int a = 4, b = 8, c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    printf("Apakah a sama dengan b ? jawabannya adalah ");
    if (a == b) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    printf("Apakah b lebih besar dari c ? jawabannya adalah ");
    if (b > c) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    printf("Apakah a tidak sama dengan c ? jawabannya adalah ");
    if (a != c) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
