#include <stdio.h>

void triangular(int n);

int main(){
    int n;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    triangular(n);

    return 0;
}

void triangular (int n){
    int hasil = 0;
    for (int i = 0; i <= n; i++){
        hasil += i;
    }
    printf("Hasil segitiga dari %d adalah %d\n", n, hasil);
}