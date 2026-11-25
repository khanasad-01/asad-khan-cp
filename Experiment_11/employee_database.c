/* Experiment 11 - Task 1
   Simple employee database using file handling.
   Records are saved in the binary file "employees.dat".
   The file is created in the folder from which you run the program
   (the current working directory), so data stays after the program ends.
   Features: add, display, update, search. */
#include <stdio.h>
#include <string.h>

#define FILE_NAME "employees.dat"

struct employee
{
    int id;
    char name[30];
    float salary;
};

void addEmployee()
{
    struct employee emp;
    FILE *fp = fopen(FILE_NAME, "ab");   /* append in binary mode */

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee name (no spaces): ");
    scanf("%29s", emp.name);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);
    printf("Employee record saved.\n");
}

void displayEmployees()
{
    struct employee emp;
    int count = 0;
    FILE *fp = fopen(FILE_NAME, "rb");

    if (fp == NULL)
    {
        printf("No records found (file does not exist yet).\n");
        return;
    }
    printf("\n%-6s %-20s %-10s\n", "ID", "Name", "Salary");
    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        printf("%-6d %-20s %-10.2f\n", emp.id, emp.name, emp.salary);
        count++;
    }
    if (count == 0)
        printf("File is empty.\n");
    fclose(fp);
}

void searchEmployee()
{
    struct employee emp;
    int id, found = 0;
    FILE *fp = fopen(FILE_NAME, "rb");

    if (fp == NULL)
    {
        printf("No records found (file does not exist yet).\n");
        return;
    }
    printf("Enter employee ID to search: ");
    scanf("%d", &id);
    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        if (emp.id == id)
        {
            printf("Found -> ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
            found = 1;
        }
    }
    if (!found)
        printf("Employee with ID %d not found.\n", id);
    fclose(fp);
}

void updateEmployee()
{
    struct employee emp;
    int id, found = 0;
    FILE *fp = fopen(FILE_NAME, "rb+");   /* read and write */

    if (fp == NULL)
    {
        printf("No records found (file does not exist yet).\n");
        return;
    }
    printf("Enter employee ID to update: ");
    scanf("%d", &id);
    while (fread(&emp, sizeof(emp), 1, fp) == 1)
    {
        if (emp.id == id)
        {
            printf("Enter new name (no spaces): ");
            scanf("%29s", emp.name);
            printf("Enter new salary: ");
            scanf("%f", &emp.salary);
            fseek(fp, -(long)sizeof(emp), SEEK_CUR);   /* go back one record */
            fwrite(&emp, sizeof(emp), 1, fp);
            found = 1;
            printf("Record updated.\n");
            break;
        }
    }
    if (!found)
        printf("Employee with ID %d not found.\n", id);
    fclose(fp);
}

int main()
{
    int choice, ch, result;

    do
    {
        printf("\n===== EMPLOYEE DATABASE =====\n");
        printf("1. Add employee\n");
        printf("2. Display all employees\n");
        printf("3. Search employee\n");
        printf("4. Update employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        result = scanf("%d", &choice);
        if (result == EOF)       /* no more input available */
            return 0;
        if (result != 1)         /* user typed something that is not a number */
        {
            while ((ch = getchar()) != '\n' && ch != EOF)
                ;                /* throw away the wrong input */
            choice = 0;          /* 0 goes to the "Invalid choice" message */
        }

        switch (choice)
        {
        case 1: addEmployee(); break;
        case 2: displayEmployees(); break;
        case 3: searchEmployee(); break;
        case 4: updateEmployee(); break;
        case 5: printf("Goodbye!\n"); break;
        default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
