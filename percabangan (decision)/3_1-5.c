#include <stdio.h>

int main() {
    float bil1, bil2;

    printf("Masukkan bilangan pertama \t: ");
    scanf("%f", &bil1);

    printf("Masukkan bilangan kedua \t: ");
    scanf("%f", &bil2);

    if (bil2 == 0) {
        printf("Division by zero\n");
        return 0;
    }

    printf("%g / %g = %.3f\n", bil1, bil2, bil1 / bil2);

    return 0;
}
