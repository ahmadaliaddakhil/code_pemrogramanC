#include <stdio.h>

int main(){
    int bil, total = 0, i = 1, maks, min;
    char lagi;

    while (1) {
        printf("Masukkan bilangan ke-%d : ", i);
        scanf("%d", &bil);
        total += bil;

        if (i == 1) {
            maks = min = bil;
        } else {
            if (bil > maks) maks = bil;
            if (bil < min) min = bil;
        }

        printf("Mau memasukkan data lagi [y/t] ? ");
        scanf(" %c", &lagi);
        if (lagi == 'y' || lagi == 'Y') {
            i++;
        } else {
            break;
        }
    }
    printf("Total bilangan = %d\n", total);
    printf("Rata-rata = %.2f\n", (float)total/(i));
    printf("Maksimum = %d\n", maks);
    printf("Minimum = %d\n", min);

    return 0;
}