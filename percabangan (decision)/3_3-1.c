#include <stdio.h>

int main() {
    char letter;
    int sum = 0, valid_flag = 0;


    printf("Masukkan sebuah huruf (X/Z/A) : ");
    scanf(" %c", &letter);

    switch (letter) {
        case 'X':
            sum = 0;
            break;
        case 'Z':
            valid_flag = 1;
            break;
        case 'A':
            sum = 1;
            break;
        default:
            printf("Unknown letter --> %c\n", letter);
            break;
    }


    printf("sum = %d, valid_flag = %d\n", sum, valid_flag);

    return 0;
}


