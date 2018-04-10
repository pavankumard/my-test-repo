/* Write a C program that accepts two integers from the user and

calculate the product of the two integers. */

#include <stdio.h>

int main(void)

{
    int x, y, result;

    printf("\nInput the first integer : ");
    scanf("%d", &x);
    printf("\nInput the second integer : ");
    scanf("%d", &y);

    result = x * y;
    printf("Product of the above two integers = %d\n", result);

    return 0;
}

