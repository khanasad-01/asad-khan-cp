/* Experiment 3 - Task 1
   Menu-driven Student Grade and Result Management System
   using switch and goto.
   Student details are stored in arrays (up to 50 students). */
#include <stdio.h>

#define MAX 50

int main()
{
    char names[MAX][30];
    int rollNo[MAX];
    float marks[MAX][3];   /* three subjects */
    float percentage[MAX];
    int count = 0;         /* number of students entered */
    int choice, i, j, found, searchRoll, ch, result;
    float total;

menu:                      /* goto label - menu is shown again and again */
    printf("\n===== STUDENT GRADE AND RESULT MANAGEMENT =====\n");
    printf("1. Add student\n");
    printf("2. Display all students\n");
    printf("3. Search student by roll number (grade and result)\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    result = scanf("%d", &choice);
    if (result == EOF)         /* no more input available */
        return 0;
    if (result != 1)           /* user typed something that is not a number */
    {
        while ((ch = getchar()) != '\n' && ch != EOF)
            ;                  /* throw away the wrong input */
        printf("Invalid input! Please enter a number from 1 to 4.\n");
        goto menu;
    }

    switch (choice)
    {
    case 1:
        if (count >= MAX)
        {
            printf("Student list is full!\n");
            goto menu;
        }
        printf("Enter name (no spaces): ");
        scanf("%s", names[count]);
        printf("Enter roll number: ");
        scanf("%d", &rollNo[count]);
        total = 0;
        for (j = 0; j < 3; j++)
        {
            printf("Enter marks of subject %d (out of 100): ", j + 1);
            scanf("%f", &marks[count][j]);
            total = total + marks[count][j];
        }
        percentage[count] = total / 3;
        count++;
        printf("Student added successfully.\n");
        goto menu;

    case 2:
        if (count == 0)
        {
            printf("No students added yet.\n");
            goto menu;
        }
        printf("\n%-5s %-15s %-8s %-8s %-8s %-10s\n", "Roll", "Name", "Sub1", "Sub2", "Sub3", "Percent");
        for (i = 0; i < count; i++)
        {
            printf("%-5d %-15s %-8.1f %-8.1f %-8.1f %-10.2f\n",
                   rollNo[i], names[i], marks[i][0], marks[i][1], marks[i][2], percentage[i]);
        }
        goto menu;

    case 3:
        printf("Enter roll number to search: ");
        scanf("%d", &searchRoll);
        found = 0;
        for (i = 0; i < count; i++)
        {
            if (rollNo[i] == searchRoll)
            {
                found = 1;
                printf("\nName       : %s\n", names[i]);
                printf("Percentage : %.2f%%\n", percentage[i]);
                if (percentage[i] >= 75)
                    printf("Grade      : A (Distinction)\n");
                else if (percentage[i] >= 60)
                    printf("Grade      : B (First Class)\n");
                else if (percentage[i] >= 50)
                    printf("Grade      : C (Second Class)\n");
                else if (percentage[i] >= 40)
                    printf("Grade      : D (Pass Class)\n");
                else
                    printf("Grade      : F\n");
                if (percentage[i] >= 40)
                    printf("Result     : PASS\n");
                else
                    printf("Result     : FAIL\n");
            }
        }
        if (found == 0)
            printf("Student with roll number %d not found.\n", searchRoll);
        goto menu;

    case 4:
        printf("Thank you. Exiting program.\n");
        break;

    default:
        printf("Invalid choice! Please enter 1 to 4.\n");
        goto menu;
    }

    return 0;
}
