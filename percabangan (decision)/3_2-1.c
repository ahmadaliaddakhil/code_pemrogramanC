#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, x1, x2, bilangan_real, bilangan_imajiner;

    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    printf("Masukkan nilai b: ");
    scanf("%f", &b);
    printf("Masukkan nilai c: ");
    scanf("%f", &c);

    D = (b * b) - (4 * a * c);
    printf("Nilai Diskriminan (D) = %.2f\n", D);

    if (D == 0) {
        x1 = x2 = -b / (2 * a);
        printf("Akar-akar persamaan: x1 = x2 = %.2f\n", x1);
    } 
    else if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("Akar-akar persamaan:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } 
    else {
        bilangan_real = -b / (2 * a);
        bilangan_imajiner = sqrt(-D) / (2 * a);
        printf("Akar-akar persamaan:\n");
        printf("x1 = %.2f + %.2fi\n", bilangan_real, bilangan_imajiner);
        printf("x2 = %.2f - %.2fi\n", bilangan_real, bilangan_imajiner);
    }

    return 0;
}