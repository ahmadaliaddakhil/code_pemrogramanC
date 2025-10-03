#include <stdio.h>

int main() {
	char karakter;
	printf("Ketikkan karakter\n");
	for (;;) {
		karakter = getchar();
		if (karakter == '\n')
			break;
		putchar(karakter);
	}
	return 0;
}
