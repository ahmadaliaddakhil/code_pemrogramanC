#include <stdio.h>

#define PI 3.14159f 

float radian(float derajat);

int main() {
    float derajat, hasil;

    printf("Masukkan nilai derajat: ");
    scanf("%f", &derajat);

    hasil = radian(derajat);

    printf("%.2f derajat = %.4f radian\n", derajat, hasil);

    return 0;
}

float radian(float derajat) {
    return derajat / 180.0f * PI;
}
