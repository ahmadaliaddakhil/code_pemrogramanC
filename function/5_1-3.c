#include <stdio.h>

float kuadrat(float x);

int main(){
    float x, hasil;

    printf("Masukkan nilai yang akan dikuadratkan: ");
    scanf("%f", &x);

    hasil = kuadrat(x);

    printf("Hasil kuadrat dari %.2f adalah %.2f\n", x, hasil);

    return 0;
}

float kuadrat (float x){
    return x * x;
}