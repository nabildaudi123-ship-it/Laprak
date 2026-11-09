#include <stdio.h>

int maksimal(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int minimal(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
    int n;
    scanf("%d", &n);

    int nilai;
    scanf("%d", &nilai);

    int maks = nilai;
    int minim = nilai;

    for (int i = 1; i < n; i++) {
        scanf("%d", &nilai);
        maks = maksimal(maks, nilai);
        minim = minimal(minim, nilai);
    }

    printf("%d %d\n", maks, minim);

    return 0;
}