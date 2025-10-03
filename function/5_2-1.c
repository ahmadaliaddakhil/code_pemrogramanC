#include <stdio.h>

int ganjil(int n);

int main(){
    int bil;

    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bil);

    if (ganjil(bil) == 1){
        printf("%d adalah bilangan ganjil\n", bil);
    } else {
        printf("%d adalah bilangan genap\n", bil);
    }
}

int ganjil(int n){
    if (n % 2 != 0){
        return 1;
    } else {
        return 0;
    }
}