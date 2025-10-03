#include <stdio.h>

int main() {
    int pilihan;

    puts("Pilih hari yang anda inginkan:");
    puts("1. Senin");
    puts("2. Selasa");
    puts("3. Rabu");
    puts("4. Kamis");
    puts("5. Jumat");
    puts("6. Sabtu");
    puts("7. Minggu");
    printf("Masukkan pilihan anda (1-7): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Pilihan Anda: Senin\n");
            break;
        case 2:
            printf("Pilihan Anda: Selasa\n");
            break;
        case 3:
            printf("Pilihan Anda: Rabu\n");
            break;
        case 4:
            printf("Pilihan Anda: Kamis\n");
            break;
        case 5:
            printf("Pilihan Anda: Jumat\n");
            break;
        case 6:
            printf("Pilihan Anda: Sabtu\n");
            break;
        case 7:
            printf("Pilihan Anda: Minggu\n");
            break;
        default:
            printf("Pilihan tidak valid! Masukkan angka 1-7\n");
            break;
    }

    puts("Selesai");

    return 0;
}
