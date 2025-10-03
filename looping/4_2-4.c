#include <stdio.h>

int main() {
	char karakter;
	int jumlah_karakter = 0, jumlah_spasi = 0;

	printf("Ketikkan sembarang kalimat: ");

	while ((karakter = getchar()) != '\n') {
		jumlah_karakter++;
		if (karakter == ' ')
			jumlah_spasi++;
	}

	printf("jumlah karakter = %d\n", jumlah_karakter);
	printf("jumlah spasi = %d\n", jumlah_spasi);

    return 0;
}