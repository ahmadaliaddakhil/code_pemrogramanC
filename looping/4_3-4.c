#include <stdio.h>

int main(){
    int i, n, nilai, min, max, total = 0;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Nilai ke-%d: ", i);
        scanf("%d", &nilai);
        total += nilai;
        if (i == 1) {
            min = max = nilai;
        } else {
            if (nilai < min) min = nilai;
            if (nilai > max) max = nilai;
        }
    }

    printf("Nilai minimal = %d\n", min);
    printf("Nilai maksimal = %d\n", max);
    printf("Nilai rata-rata = %.2f\n", (float)total/n);

    return 0;
}


