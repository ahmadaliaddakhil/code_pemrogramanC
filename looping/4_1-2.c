#include <stdio.h>

int main(){
	int n, i, triangular = 0;
	printf("Masukkan bilangan n: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		triangular += i;
	}

	printf("Bilangan triangular ke-%d adalah %d\n", n, triangular);
	return 0;
}