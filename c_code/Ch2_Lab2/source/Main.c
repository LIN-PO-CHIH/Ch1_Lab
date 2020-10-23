#include<stdio.h>
#include<stdlib.h>

int main(void) {
	printf("  |");
	for (int i = 0; i <= 9; i++)
		printf(" %3d", i);
	putchar('\n');
	puts("----------------------------------");
	for (int i = 0; i <= 9; i++) {
		printf(" %d | ", i);
		for (int j = 0; j <= 9; j++)
			printf(" %3d", i*j);
		putchar('\n');
	}
	system("pause");
	return 0;
}