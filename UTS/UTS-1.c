#include <stdio.h>

int main(){
    int i, n, fiboncacci1 = 0, fibonacci2 = 1, fibonacci;

    printf("masukkan nilai n:");
    scanf("%d", &n);
    
    printf("%d %d", fiboncacci1, fibonacci2);

    for (i = 0; i <= n; i++){
        fibonacci = fiboncacci1 + fibonacci2;

        printf ("%d", fibonacci);

        fiboncacci1 = fibonacci2;
        fibonacci2 = fibonacci;
    }
    return 0;
}