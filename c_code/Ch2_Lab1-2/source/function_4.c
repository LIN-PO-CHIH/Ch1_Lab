#include<stdio.h>
#include<stdlib.h>

int Han_Xin_4() {
	char sign1 = 'X';
	char sign2 = '-';
	int i, j;
	int temp1, temp2;

	temp1 = 1;
	temp2 = 8;

	printf("(4)\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if ((i > 0) && (i < 5) && (j == temp1)) {
				printf("%c", sign1);
			}
			else if ((i > 0) && (i < 5) && (j == temp2)) {
				temp1++;
				printf("%c", sign1);
				temp2--;
			}
			else if (i == 0) {
				printf("%c", sign1);
			}
			else {
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
}