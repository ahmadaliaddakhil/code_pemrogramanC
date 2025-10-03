#include <stdio.h>

int main(){
    int bilangan;

    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bilangan);

    printf("Bilangan yang diinputkan adalah %d.\n", bilangan);
    if (bilangan % 2 == 0) {
        printf("%d adalah bilangan genap\n", bilangan);
    } else {
        printf("%d adalah bilangan ganjil\n", bilangan);
    }

    return 0;
}