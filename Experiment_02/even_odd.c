/* Experiment 2 - Task 1
   Check whether the entered number is even or odd. */
#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("%d is an EVEN number.\n", number);
    else
        printf("%d is an ODD number.\n", number);

    return 0;
}
