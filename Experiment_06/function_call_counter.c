/* Experiment 6 - Task 1
   Counter function that prints how many times it has been called.
   Storage classes used:
     static   - keeps the call count between function calls
     auto     - normal local variable (new each call)
     register - local variable suggested to be kept in a CPU register
     extern   - global variable declared and used in a function */
#include <stdio.h>

int totalCalls = 0;           /* global variable (extern storage class) */

void counter()
{
    static int staticCount = 0;   /* static: value is remembered */
    auto int autoCount = 0;       /* auto: reset to 0 on every call */
    register int regCount = 0;    /* register: reset to 0 on every call */
    extern int totalCalls;        /* extern: refers to the global variable */

    staticCount++;
    autoCount++;
    regCount++;
    totalCalls++;

    printf("Function called %d time(s)\n", staticCount);
    printf("   auto = %d, register = %d, extern (global) = %d\n",
           autoCount, regCount, totalCalls);
}

int main()
{
    int times, i;

    printf("How many times do you want to call the function? ");
    scanf("%d", &times);

    for (i = 0; i < times; i++)
        counter();

    printf("\nFinal count from global variable = %d\n", totalCalls);
    return 0;
}
