#include <stdio.h>

int main(){
    int n, baris, kolom;
    char jawab;
    do {
        printf("Masukkan nilai n: ");
        scanf("%d", &n);

        for (baris = 1; baris <= n; baris++) {
            for (kolom = 1; kolom <= n; kolom++) {
                printf("%d ", baris);
            }
            printf("\n");
        }

        do {
            printf("apakah anda ingin keluar (y/t)? ");
            scanf(" %c", &jawab);
        } while (jawab != 'y' && jawab != 't');
    } while (jawab != 'y');
    return 0;
}