/* Experiment 10 - Task 1
   Add two numbers using pointers. */
#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int *ptr1 = &num1, *ptr2 = &num2;   /* pointers hold the addresses */

    printf("Enter first number: ");
    scanf("%d", ptr1);                  /* same as scanf("%d", &num1) */
    printf("Enter second number: ");
    scanf("%d", ptr2);

    sum = *ptr1 + *ptr2;                /* * gives the value at the address */

    printf("Sum = %d + %d = %d\n", *ptr1, *ptr2, sum);
    return 0;
}
