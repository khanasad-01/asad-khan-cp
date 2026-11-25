/* Experiment 7 - Task 1
   Find the largest element in an array. */
#include <stdio.h>

int main()
{
    int arr[100], n, i, largest;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid size!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("The largest element is %d\n", largest);
    return 0;
}
