#include <stdio.h>

int main(){
    int i, n, faktorial = 1;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    printf("%d", 1);
    for (i = 2; i <= n; i++) {
        printf("*%d", i);
    }

    for (i = 1; i <= n; i++) {
        faktorial *= i;
    }

    printf(" = %d\n", faktorial);
    return 0;
}