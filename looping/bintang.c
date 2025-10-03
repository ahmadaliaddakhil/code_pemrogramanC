#include <stdio.h>


int main() {
    int tinggi;

    printf("Masukkan tinggi belah ketupat: ");
    scanf("%d", &tinggi);

    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%d", i);
        }
        printf("\n");
    }

    for (int i = tinggi - 1; i >= 1; i--) {
        for (int j = 1; j <= tinggi - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}