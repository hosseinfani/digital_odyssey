#include <stdio.h>
#include <limits.h>
#include <time.h>
int Add(int a, int b) {
    return a + b;
}

int main(void) {

    int number1, number2, sum;

    printf("Enter two integers between %d and %d: \n", INT_MIN, INT_MAX);
    scanf("%d %d", &number1, &number2);

    clock_t begin = clock();
    sum = Add(number1, number2);
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("%d + %d = %d \n", number1, number2, sum);
    printf("Total time = %4f", time_spent);
    return 0;
}
