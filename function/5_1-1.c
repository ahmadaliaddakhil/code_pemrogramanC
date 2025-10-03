#include <stdio.h>

void menu();

int main(){
    int n, i;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for ( i = 1; i <=n; i++){
        menu();
    }

    return 0;
}

void menu(){
    printf("Menu restoran pilihan:\n");
    printf("1. Nasi Kebuli \n");
    printf("2. Cibus \n");
    printf("3. Ayam Malay \n");
}