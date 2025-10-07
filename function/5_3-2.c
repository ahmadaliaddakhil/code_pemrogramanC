#include <stdio.h>

int permutasi (int, int);
int kombinasi  (int, int);

int main(){
    int n, r, hasil_permutasi, hasil_kombinasi;

    printf ("masukkan nilai n dan r:");
    scanf("%d %d", &n, &r);

    hasil_permutasi = permutasi (n,r);
    hasil_kombinasi = kombinasi (n,r);

    printf ("permutasi dari %d dan %d = %d", n, r, hasil_permutasi);
    printf ("kombinasi dari %d dan %d = %d", n, r, hasil_kombinasi);
}

int faktorial(int x){
    
    int hasil = 1;
    
    for (int i = 1; i<=x; i++){
        hasil *= i; 
    }
    return hasil;
}
int permutasi(int n, int r){
    return faktorial(n) / faktorial(n - r);
}

int kombinasi(int n, int r){
    return faktorial(n) / (faktorial(r) * faktorial(n - r));
}