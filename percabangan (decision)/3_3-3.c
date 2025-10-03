#include <stdio.h>

int main() {
    int pilihan;
    float sisi, jari_jari, tinggi, volume, luas;
    const float PI = 3.14;

    printf("Menu :\n");
    printf("1. Menghitung volume kubus\n");
    printf("2. Menghitung luas lingkaran\n");
    printf("3. Menghitung volume silinder\n");
    printf("Masukkan pilihan anda (1-3): ");
    scanf("%d", &pilihan);


    switch (pilihan) {
        case 1:
            printf("Masukkan panjang sisi kubus : ");
            scanf("%f", &sisi);
            volume = sisi * sisi * sisi;
            printf("Volume kubus = %.2f\n", volume);
            break;

        case 2:
            printf("Masukkan panjang jari-jari lingkaran : ");
            scanf("%f", &jari_jari);
            luas = PI * jari_jari * jari_jari;
            printf("Luas lingkaran = %.2f\n", luas);
            break;

        case 3:
            printf("Masukkan panjang jari-jari silinder : ");
            scanf("%f", &jari_jari);
            printf("Masukkan tinggi silinder : ");
            scanf("%f", &tinggi);
            volume = PI * jari_jari * jari_jari * tinggi;
            printf("Volume silinder = %.2f\n", volume);
            break;

        default:
            printf("Pilihan tidak valid!\n");
            break;
    }

    return 0;
}
