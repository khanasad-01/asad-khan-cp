/* Experiment 8 - Task 1
   Find the length of a string without using a library function. */
#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* count characters until the newline or the null character */
    while (str[length] != '\0' && str[length] != '\n')
        length++;

    printf("Length of the string = %d\n", length);
    return 0;
}
