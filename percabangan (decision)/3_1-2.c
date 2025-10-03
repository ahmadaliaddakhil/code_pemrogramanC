#include <stdio.h>

int main(){
	float total_pembelian, potongan = 0, total_bayar;

	printf("Masukkan total pembelian: Rp. ");
	scanf("%f", &total_pembelian);

	if (total_pembelian >= 100000) {
		potongan = 0.05 * total_pembelian;
	} else {
		potongan = 0;
	}

   total_bayar = total_pembelian - potongan;

	printf("Total pembelian adalah Rp. %.0f\n", total_pembelian);
	printf("Total yang harus dibayar setelah potongan adalah Rp. %.0f\n", total_bayar);

	return 0;
}