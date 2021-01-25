#include <stdio.h>
#define MAX 8

void func_and(int a[], int b[], int result[]){
	for(int i=0; i < MAX; i = i + 1){
		  result[i] = a[i] & b[i];
	}
}
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
    func_and(x, y, z);
//    for(int i=0; i < MAX; i = i + 1){
//		z[i] = x[i] & y[i];
//	}
    printf("The first number AND second binary yield:\n");
    for(int i=0; i < MAX; i = i + 1){
    	printf("%d", z[i]);
	}

	return 0;
}
