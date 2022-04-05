#include <stdio.h>

#include "logic.h"
#include "complement.h"
#include "conversion.h"
#include "arithmetic.h"

#define MAX 8

int main(void) {

	setbuf(stdout, NULL);

	int x[MAX];
   int y[MAX];

   printf("Enter the first binary number:\n");
   for(int i=0; i < MAX; i = i + 1){
   	scanf("%d", &x[i]);
   }
   printf("Enter the second binary number:\n");
	for(int i=0; i < MAX; i = i + 1){
		scanf("%d", &y[i]);
	}

	int z[MAX];

	func_signed_2s_subtraction(x, y, z);

   printf("The first number + second number yield:\n");
   to_octal(z);

	return 0;
}

/********************************************************************
 *  other samples
 *
 */

// #include <limits.h>
// int main(void) {
//
// 	setbuf(stdout, NULL);
//
// 	signed int a;
// 	int* a_ptr = &a;
//
//
// 	printf("Enter a signed integer number between %d and %d:\n", INT_MIN, INT_MAX);
// 	scanf("%d", &a);
//
// 	printf("The number is: \n");
// 	//printf("Binary: %b \n", a); There is no option for binary!
// 	printf("Octal: %o \n", a);
// 	printf("Decimal: %d \n", a);
// 	printf("Hexadecimal: %x \n", a);
// 	printf("HEXAdecimal: %X\n", a);
// }
