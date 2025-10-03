#include <stdio.h>

int main() {
	int n, i, angka, jumlah;
	char jawab;
	do {
		printf("Masukkan nilai n: ");
		scanf("%d", &n);

		for (i = 0; i < n; i++) {
			jumlah = 0;
			for (angka = 1; angka <= i; angka++) {
				jumlah += angka;
			}
			printf("%d ", jumlah);
		}
		printf("\n");

		do {
			printf("apakah anda ingin keluar (y/t)? ");
			scanf(" %c", &jawab);
		} while (jawab != 'y' && jawab != 't');
	} while (jawab != 'y');
	return 0;
}
