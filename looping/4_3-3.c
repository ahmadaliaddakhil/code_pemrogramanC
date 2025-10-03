#include <stdio.h>

int main(){
    int i, n;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (i = 1; i < n; i += 2) {
        if (i >= 100)
            break;
        if (i % 7 == 0 || i % 11 == 0)
            continue;
        printf("%d ", i);
    }
    return 0;
}