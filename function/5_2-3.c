#include <stdio.h>

int prima (int n);

int main(){
    int bil;

    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bil);

    if(prima(bil)){
        printf("%d adalah bilangan prima\n", bil);
    } else {
        printf("%d bukan bilangan prima\n", bil);
    }

    return 0;
}

int prima(int n){
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}