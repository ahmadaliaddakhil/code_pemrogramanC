#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan sembarang bilangan : ");
    scanf("%d", &bilangan);

    if (bilangan >= 1 && bilangan <= 100) {
        printf("%d ada dalam range 1-100\n", bilangan);
    } else {
        printf("%d di luar range 1-100\n", bilangan);
    }

    return 0;
}