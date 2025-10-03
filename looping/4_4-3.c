#include <stdio.h>

int main(){
    int i, n, jumlah = 0, prima, angka = 2;
    char jawab;

    do {
        printf("masukakn nilai ke n:");
    scanf("%d", &n);

    while (jumlah < n){
        prima = 1;

        for ( i = 2; i * i <= angka; i++){
            if ( angka % i == 0){
                prima = 0;
                break;
            }
        }
        if (prima == 1){
            printf("%d", angka);
            jumlah++;
        }

        angka ++;
    }
    do{
        printf("\nApakah anda ingin keluar [y/t]?");
        scanf(" %c", &jawab );
    }while (jawab != 'y' && jawab != 'Y' && jawab !='t' && jawab !='T');
    }while(jawab !='t' && jawab !='T');
}