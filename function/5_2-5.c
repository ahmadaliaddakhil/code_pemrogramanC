#include <stdio.h>

float konversi(float suhu, char asal, char tuj);

int main() {
    float suhu, hasil;
    char asal, tuj;

    printf("Masukkan suhu sumber = ");
    scanf("%f", &suhu);

    printf("Masukkan satuan asal (C/F/R) = ");
    scanf(" %c", &asal);  
    printf("Masukkan satuan tujuan (C/F/R) = ");
    scanf(" %c", &tuj);

    hasil = konversi(suhu, asal, tuj);

    printf("Hasil konversi suhu %.2f %c = %.2f %c\n", suhu, asal, hasil, tuj);

    return 0;
}

float konversi(float suhu, char asal, char tuj) {
    float hasil = suhu;

    if (asal == 'C' || asal == 'c') {
        if (tuj == 'F' || tuj == 'f') {
            hasil = (suhu * 9.0f / 5.0f) + 32;
        } else if (tuj == 'R' || tuj == 'r') {
            hasil = suhu * 4.0f / 5.0f;
        }
    }

    else if (asal == 'F' || asal == 'f') {
        if (tuj == 'C' || tuj == 'c') {
            hasil = (suhu - 32) * 5.0f / 9.0f;
        } else if (tuj == 'R' || tuj == 'r') {
            hasil = (suhu - 32) * 4.0f / 9.0f;
        }
    }

    else if (asal == 'R' || asal == 'r') {
        if (tuj == 'C' || tuj == 'c') {
            hasil = suhu * 5.0f / 4.0f;
        } else if (tuj == 'F' || tuj == 'f') {
            hasil = (suhu * 9.0f / 4.0f) + 32;
        }
    }

    return hasil;
}
