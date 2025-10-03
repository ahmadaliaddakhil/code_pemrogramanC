#include <stdio.h>

int main() {
    int nilai_angka;

    printf("Masukkan nilai angka : ");
    scanf("%d", &nilai_angka);

    if (nilai_angka <= 40) {
        printf("Nilai huruf adalah E\n");
    }
    else if (nilai_angka <= 55) {
        printf("Nilai huruf adalah D\n");
    }
    else if (nilai_angka <= 60) {
        printf("Nilai huruf adalah C\n");
    }
    else if (nilai_angka <= 80) {
        printf("Nilai huruf adalah B\n");
    }
    else if (nilai_angka <= 100) {
        printf("Nilai huruf adalah A\n");
    }
    else {
        printf("Nilai di luar jangkauan (0 - 100)\n");
    }

    return 0;
}
