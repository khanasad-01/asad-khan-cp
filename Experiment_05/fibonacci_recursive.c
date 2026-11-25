/* Experiment 5 - Task 2
   Fibonacci series for N terms using a recursive method. */
#include <stdio.h>

/* returns the nth Fibonacci number (term 0 = 0, term 1 = 1) */
int fibonacci(int n)
{
    if (n == 0)               /* base case 1 */
        return 0;
    if (n == 1)               /* base case 2 */
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);   /* recursive case */
}

int main()
{
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("Please enter a positive number.\n");
    else
    {
        printf("Fibonacci series (recursive) for %d terms:\n", n);
        for (i = 0; i < n; i++)
            printf("%d ", fibonacci(i));
        printf("\n");
    }
    return 0;
}
