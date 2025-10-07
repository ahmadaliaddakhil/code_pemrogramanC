#include <stdio.h>

void tambahDua(int *a, int *b) {
    *a += 2;
    *b += 2;
}

int main() {
    int x, y;
    printf("Masukkan dua bilangan: ");
    scanf("%d %d", &x, &y);

    tambahDua(&x, &y);

    printf("Setelah dinaikkan 2: %d %d\n", x, y);
    return 0;
}