#include <stdio.h>

int main() {
    char karakter;
    int jumlah_karakter = 0, jumlah_spasi = 0;
    int jumlah_huruf_kecil = 0, jumlah_huruf_besar = 0, jumlah_angka = 0;

    printf("Ketikkan sembarang kalimat: ");

    while ((karakter = getchar()) != '\n') {
        jumlah_karakter++;

        if (karakter == ' ')
            jumlah_spasi++;
        else if (karakter >= 'a' && karakter <= 'z')
            jumlah_huruf_kecil++;
        else if (karakter >= 'A' && karakter <= 'Z')
            jumlah_huruf_besar++;
        else if (karakter >= '0' && karakter <= '9')
            jumlah_angka++;
    }

    printf("jumlah karakter = %d\n", jumlah_karakter);
    printf("jumlah spasi = %d\n", jumlah_spasi);
    printf("jumlah huruf kecil = %d\n", jumlah_huruf_kecil);
    printf("jumlah huruf besar = %d\n", jumlah_huruf_besar);
    printf("jumlah angka = %d\n", jumlah_angka);

    return 0;
}
