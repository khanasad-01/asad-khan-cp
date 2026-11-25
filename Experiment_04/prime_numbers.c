/* Experiment 4 - Task 1
   Find all prime numbers between two numbers using functions. */
#include <stdio.h>

/* function declaration: returns 1 if n is prime, otherwise 0 */
int isPrime(int n);

/* function declaration: prints all primes from start to end */
void printPrimes(int start, int end);

int main()
{
    int start, end, temp;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    /* if user enters bigger number first, swap them */
    if (start > end)
    {
        temp = start;
        start = end;
        end = temp;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);
    printPrimes(start, end);

    return 0;
}

int isPrime(int n)
{
    int i;
    if (n < 2)                /* 0, 1 and negatives are not prime */
        return 0;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void printPrimes(int start, int end)
{
    int i, count = 0;
    for (i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
            count++;
        }
    }
    if (count == 0)
        printf("No prime numbers found in this range.");
    printf("\n");
}
