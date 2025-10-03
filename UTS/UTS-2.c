#include <stdio.h>

int main(){
    int i, gaji_pokok = 2000000, tunjangan = 0, jumlah = 0;
    char j;

    puts("masukkan profesimu:");
    puts("1. programmer junior");
    puts("2. programmer senior ");
    puts("3. data analys");
    puts("4. lainnya");
    puts("masukakn jawaban dalam bentuk angka");
    scanf("%d", &i);

    if ( i == 1){
        printf("anda adalah seorang programmer junior, apakah anda punya sertifikat?");
        scanf("%d", &j);
            if(j == 'Y' || j == 'y'){
                tunjangan += 1325000;
            }else{
                tunjangan += 1250000;
            }
    }
    if ( i == 2){
        printf("anda adalah seorang programmer senior, apakah anda punya sertifikat?");
        scanf("%d", &j);
            if(j == 'Y' || j == 'y'){
                tunjangan += 1550000;
            }else{
                tunjangan += 1500000;
            }
    }
    if ( i == 3){
        printf("anda adalah seorang data analys, apakah anda punya sertifikat?");
        scanf("%d", &j);
            if(j == 'Y' || j == 'y'){
                tunjangan += 2200000;
            }else{
                tunjangan += 2000000;
            }
    }
    if ( i == 4){
        printf("anda adalah seorang pekerja lainnya, apakah anda punya sertifikat?");
        scanf("%d", &j);
            if(j == 'Y' || j == 'y'){
                tunjangan += 550000;
            }else{
                tunjangan += 500000;
            }
    }

    jumlah = gaji_pokok + tunjangan;

    printf("total gaji pokok beserta tunjangan sebanyak = %d", jumlah);
}