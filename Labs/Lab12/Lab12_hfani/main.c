
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int a;

	printf("First Operand:");
	scanf("%d", &a);

	printf("Normal divisions:\n");
	printf("%d/2 = %d \n", a, a/2 );
	printf("%d/4 = %d \n", a, a/4 );
	printf("%d/8 = %d \n", a, a/8 );

	printf("Divisions by arithmetic shifts to right:\n");
	printf("%d/2 = %d \n", a, a >> 1 );
	printf("%d/4 = %d \n", a, a >> 2 );
	printf("%d/8 = %d \n", a, a >> 3 );

}

