#include <stdio.h>

#include "logic.h"
#include "complement.h"
#include "conversion.h"

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
    //func_and(x, y, z);
    //func_not(x, z);
    func_1s_comp(x, z);

    printf("The first number AND second number yield:\n");
    to_octal(x);
//    for(int i=0; i < MAX; i = i + 1){
//    	printf("%d", z[i]);
//	}

	return 0;
}

/********************************************************************
 *  other samples
 *
 */
//int main(void) {
//
//	setbuf(stdout, NULL);
//
//	int x;
//
//	printf("Enter an integer number:\n");
//	scanf("%d", &x);
//
//	printf("The number is: \n");
//	//printf("Binary: %b \n",x); There is no option for binary!
//	printf("Octal: %o \n",x);
//	printf("Decimal: %d \n",x);
//	printf("Hexadecimal: %x \n",x);
//	printf("HEXAdecimal: %X", x);
//}
//
//int main(void) {
//
//	setbuf(stdout, NULL);
//
//	int x;
//
//	printf("Enter an integer number:\n");
//	scanf("%x", &x);
//
//	printf("The number is: \n");
//	//printf("Binary: %b \n",x); There is no option for binary!
//	printf("Octal: %o \n",x);
//	printf("Decimal: %d \n",x);
//	printf("Hexadecimal: %x \n",x);
//	printf("HEXAdecimal: %X", x);
//}
//
