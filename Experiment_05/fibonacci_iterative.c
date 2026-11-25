/* Experiment 5 - Task 1
   Fibonacci series for N terms using an iterative method (loop). */
#include <stdio.h>

void fibonacciIterative(int n)
{
    int first = 0, second = 1, next, i;

    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("Please enter a positive number.\n");
    else
    {
        printf("Fibonacci series (iterative) for %d terms:\n", n);
        fibonacciIterative(n);
    }
    return 0;
}
