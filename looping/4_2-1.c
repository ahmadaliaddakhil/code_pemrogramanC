#include <stdio.h>

int main(){
    char karakter;
    printf("Ketik karakter:");
    while (1) {
        scanf(" %c", &karakter);
        if (karakter == 'X') {
            break;
        }
        printf("Karakter yang diketik: %c\n", karakter);
    }
    return 0;
}