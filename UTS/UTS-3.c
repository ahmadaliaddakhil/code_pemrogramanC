#include <stdio.h>

int main(){
    int x,y;

    printf("masukkan nilai X dan Y pisahkan dengan koma");
    scanf("%d,%d", &x, &y);

    if(x >= 1 && y>= 1){
        printf("bilangan (%d, %d) terdapat di kuadran 1", x, y);
    }else if(x>=1 && y<=1){
        printf("bilangan (%d, %d) terdapat di kuadran 2", x,y);
    }else if(x<=1 && y<=1){
        printf("bilangan (%d, %d) terdapat di kuadran 3", x,y);
    }else if(x<=1 && y>=1){
        printf("bilangan (%d, %d) terdapat di kuadran 2", x,y);
    }else{
        printf("bilangan (%d, %d) berada di titik pusat");
    }
}