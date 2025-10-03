#include <stdio.h>

int main(){
    int bil, total = 0, i = 1;
    char lagi;

    while (1) {
        printf("Masukkan bilangan ke-%d : ", i);
        scanf("%d", &bil);
        total += bil;

        printf("Mau memasukkan data lagi [y/t] ? ");
        scanf(" %c", &lagi);
        if (lagi == 'y' || lagi == 'Y') {
            i++;
        } else {
            break;
        }
    }
    printf("Total bilangan = %d\n", total);

    return 0;
}