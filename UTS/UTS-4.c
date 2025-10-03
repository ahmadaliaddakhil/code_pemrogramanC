#include <stdio.h>
#define phi 3.14f

float luas_lingkaran(float r);
float keliling_lingkaran(float r);

int main(){
    float r, hitung_luas, hitung_keliling;

    printf("masukkan nilai jari-jari:");
    scanf("%g", &r);

    hitung_luas = luas_lingkaran(r);
    hitung_keliling = keliling_lingkaran (r);

    printf("luas lingkaran dari jari jari %g adalah %g", r, hitung_luas);
    printf("keliling lingkaran dari jari jari %g adalah %g", r, hitung_keliling);
}

float luas_lingkaran(float r){
    return phi * (r*r);
}

float keliling_lingkaran (float r){
    return 2*phi*r;
}