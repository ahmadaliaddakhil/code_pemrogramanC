#include <stdio.h>

int main() {
    int bilangan, jumlah = 0, digit;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    while (bilangan > 0) {
        digit = bilangan % 10;
        jumlah += digit;
        bilangan /= 10;
    }

    printf("Jumlah angka = %d\n", jumlah);
    return 0;
}
