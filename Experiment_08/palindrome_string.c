/* Experiment 8 - Task 2
   Check whether the entered string is a palindrome or not. */
#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, i, isPalindrome = 1;

    printf("Enter a string (without spaces): ");
    scanf("%99s", str);

    /* find length manually */
    while (str[length] != '\0')
        length++;

    /* compare first and last characters, moving towards the middle */
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("\"%s\" is a palindrome.\n", str);
    else
        printf("\"%s\" is not a palindrome.\n", str);
    return 0;
}
