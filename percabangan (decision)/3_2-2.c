#include <stdio.h>

int main() {
    float bil1, bil2, hasil;
    int pilihan;

    printf("Masukkan bilangan pertama : ");
    scanf("%f", &bil1);
    printf("Masukkan bilangan kedua : ");
    scanf("%f", &bil2);

    printf("\nMenu Matematika\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Pembagian\n");
    printf("4. Perkalian\n");
    printf("Masukkan pilihan anda : ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        hasil = bil1 + bil2;
        printf("Hasil operasi tersebut = %.2f\n", hasil);
    }
    else if (pilihan == 2) {
        hasil = bil1 - bil2;
        printf("Hasil operasi tersebut = %.2f\n", hasil);
    }
    else if (pilihan == 3) {
        if (bil2 == 0) {
            printf("Error: Pembagian dengan nol tidak diperbolehkan!\n");
        } else {
            hasil = bil1 / bil2;
            printf("Hasil operasi tersebut = %.2f\n", hasil);
        }
    }
    else if (pilihan == 4) {
        hasil = bil1 * bil2;
        printf("Hasil operasi tersebut = %.2f\n", hasil);
    }
    else {
        printf("Pilihan tidak valid!\n");
    }

    return 0;
}


