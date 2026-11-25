/* Experiment 2 - Task 2
   Find the sum of all odd numbers between two numbers entered by the user.
   "Between" means numbers strictly between the two values.
   If the first number is bigger, the two are swapped. */
#include <stdio.h>

int main()
{
    int first, second, temp, i, sum = 0;

    printf("Enter the first number: ");
    scanf("%d", &first);
    printf("Enter the second number: ");
    scanf("%d", &second);

    /* make sure first is the smaller number */
    if (first > second)
    {
        temp = first;
        first = second;
        second = temp;
    }

    printf("Odd numbers between %d and %d: ", first, second);
    for (i = first + 1; i < second; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
            sum = sum + i;
        }
    }

    printf("\nSum of odd numbers = %d\n", sum);
    return 0;
}
