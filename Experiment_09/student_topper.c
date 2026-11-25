/* Experiment 9 - Task 1
   Structure student_record with name, roll_number and total marks.
   Read 5 students' data and display the topper. */
#include <stdio.h>

struct student_record
{
    char name[50];
    int roll_number;
    float total_marks;
};

int main()
{
    struct student_record students[5];
    int i, topperIndex = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name (no spaces): ");
        scanf("%49s", students[i].name);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Total marks obtained: ");
        scanf("%f", &students[i].total_marks);
    }

    /* find the student with the highest total marks */
    for (i = 1; i < 5; i++)
    {
        if (students[i].total_marks > students[topperIndex].total_marks)
            topperIndex = i;
    }

    printf("\n===== TOPPER =====\n");
    printf("Name         : %s\n", students[topperIndex].name);
    printf("Roll number  : %d\n", students[topperIndex].roll_number);
    printf("Total marks  : %.2f\n", students[topperIndex].total_marks);
    return 0;
}
