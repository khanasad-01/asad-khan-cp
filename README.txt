C PROGRAMMING LAB - PROGRAMS (VSEC102)
======================================

1. PROJECT OVERVIEW
-------------------
This folder has one .c file for every programming task in Experiments 1 to 11
of the C Programming Lab Manual (2026-27). Each experiment has its own folder.
Student details (name, age, class, division, UIN) appear only inside
Experiment_01/print_basic_details.c.

2. LIST OF PROGRAMS
-------------------
Experiment_01
  print_basic_details.c        Task 1: print details using escape sequences
  pcm_average_eligibility.c    Task 2: PCM average + conditional operator (50% rule)
Experiment_02
  even_odd.c                   Task 1: even or odd
  sum_odd_numbers.c            Task 2: sum of odd numbers between two numbers
Experiment_03
  student_grade_menu.c         Task 1: menu-driven Student Grade and Result system (switch + goto)
Experiment_04
  prime_numbers.c              Task 1: primes between two numbers using functions
Experiment_05
  fibonacci_iterative.c        Task 1: Fibonacci, N terms, iterative
  fibonacci_recursive.c        Task 2: Fibonacci, N terms, recursive
Experiment_06
  function_call_counter.c      Task 1: counter function using storage classes (static, auto, register, extern)
Experiment_07
  largest_in_array.c           Task 1: largest element in an array
  matrix_sum.c                 Task 2: sum of two matrices
Experiment_08
  string_length.c              Task 1: string length without library function
  palindrome_string.c          Task 2: palindrome check
Experiment_09
  student_topper.c             Task 1: struct student_record, 5 students, show topper
Experiment_10
  add_using_pointers.c         Task 1: add two numbers using pointers
  reverse_array_pointers.c     Task 2: print array in reverse using pointers
Experiment_11
  employee_database.c          Task 1: employee database using file handling

3. OPEN THE FOLDER IN VISUAL STUDIO CODE
----------------------------------------
- Extract the ZIP file.
- Open VS Code -> File -> Open Folder -> choose Affan_C_Programming.
- Click any .c file in the left panel to open it.

4. COMPILE A PROGRAM WITH GCC
-----------------------------
Open the MSYS2 UCRT64 terminal (or the VS Code terminal set to it), go to the
experiment folder, then compile. Example:

    cd Experiment_02
    gcc even_odd.c -o even_odd

5. RUN THE PROGRAM
------------------
    ./even_odd            (in the UCRT64 terminal)
    even_odd.exe          (in Windows Command Prompt / PowerShell: .\even_odd.exe)

6. FILE HANDLING (Experiment 11)
--------------------------------
employee_database.c saves records in a file named employees.dat.
The file is created in the folder you are in when you RUN the program (the
current working directory). For example, if you run it from inside
Experiment_11, employees.dat appears in Experiment_11. It is a binary file,
so it will not be readable in Notepad. Delete it to start with an empty database.

7. NOTES ON INPUT
-----------------
- Names are read with scanf, so type them without spaces (e.g. Rahul, not Rahul Kumar).
- Experiment 2 Task 2 counts numbers strictly between the two values.
  Example: 1 and 10 -> 3 + 5 + 7 + 9 = 24.

8. SAMPLE INPUT / OUTPUT
------------------------
See Sample_Outputs.txt.
