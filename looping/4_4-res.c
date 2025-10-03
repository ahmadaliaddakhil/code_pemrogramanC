#include <stdio.h>

int main() {
    int bilangan, pengali, ulang, hasilFaktorial = 1;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    for (pengali = 2; pengali <= bilangan; pengali++) {
        int hasilSementara = 0;

        for (ulang = 0; ulang < pengali; ulang++) {
            hasilSementara += hasilFaktorial;
        }

        hasilFaktorial = hasilSementara;
    }

    printf("%d! = %d\n", bilangan, hasilFaktorial);

    return 0;
}
