/* Experiment 10 - Task 2
   Print the elements of an array in reverse order using pointers. */
#include <stdio.h>

int main()
{
    int arr[50], n, i;
    int *ptr;

    printf("Enter the number of elements (1 to 50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50)
    {
        printf("Invalid size!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order: ");
    ptr = arr + n - 1;                  /* pointer to the last element */
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr--;                          /* move one element back */
    }
    printf("\n");
    return 0;
}
