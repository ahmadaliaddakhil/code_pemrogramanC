#include <stdio.h>

long int faktorial(int n);

int main(){
    int n;
    long int hasil;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    hasil = faktorial(n);

    printf("Faktorial dari %d adalah %ld\n", n, hasil);

    return 0;
}

long int faktorial(int n){
    long int hasil = 1;
    for (int i = 1; i <= n; i++){
        hasil *= i;
    }
    return hasil;
}