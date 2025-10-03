#include <stdio.h>

int main() {
    int input, sisa, faktor = 0;

    printf("Masukkan angka : ");
    scanf("%d", &input);

    if (input <= 1) {
        printf("%d bukan bilangan prima\n", input);
        return 0;
    }

    sisa = input % 1;
    if (sisa == 0) faktor++;

    sisa = input % input;
    if (sisa == 0) faktor++;

    sisa = input % 2;
    if (input != 2 && sisa == 0) faktor++;

    sisa = input % 3;
    if (input != 3 && sisa == 0) faktor++;

    sisa = input % 5;
    if (input != 5 && sisa == 0) faktor++;

    sisa = input % 7;
    if (input != 7 && sisa == 0) faktor++;

    if (faktor == 2)
        printf("%d adalah bilangan prima\n", input);
    else
        printf("%d bukan bilangan prima\n", input);

    return 0;
}

