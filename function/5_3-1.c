#include <stdio.h>

int perbandingan (int a, int b);

int main(){
    int a, b, nilai;

    printf("masukkan nilai a dan b:");
    scanf("%d %d", &a, &b);

    nilai = perbandingan(a,b);
    printf("nilai terbesar adalah %d", nilai);
}

int perbandingan(int a, int b){
    if (a > b){
        return a;
    } else{
        return b;
    }
}