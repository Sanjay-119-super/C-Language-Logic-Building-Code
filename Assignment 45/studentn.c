#include <stdio.h>
#include <stdlib.h> // For dynamic memory allocation

// ===========================================
// 🔸 Structure: Student
// Purpose: Ek student ka data store karta hai
// Fields: rollNumber, name, marks
// ===========================================
struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};

// ===========================================
// 🔸 Function: inputStudent
// Purpose: Ek student ka data lena
// Return: Student struct
// ===========================================
struct Student inputStudent()
{
    struct Student s;

    printf("\nEnter Roll Number: ");
    scanf("%d", &s.rollNumber);

    getchar(); // Clear input buffer
    printf("Enter Name: ");
    fgets(s.name, 50, stdin);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    return s;
}

// ===========================================
// 🔸 Function: displayStudent
// Purpose: Ek student ka data print karna
// ===========================================
void displayStudent(struct Student s)
{
    printf("Roll Number: %d | Name: %s | Marks: %.2f\n", s.rollNumber, s.name, s.marks);
}

// ===========================================
// 🔸 Main Function
// Purpose: Program execution starts here
// ===========================================
int main()
{
    int n;
    struct Student *students; // Dynamic array pointer

    // Step 1: User se number of students lena
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Step 2: Dynamically memory allocate karna
    students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Program terminate
    }

    // Step 3: Input loop for n students
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for Student %d:\n", i + 1);
        students[i] = inputStudent();
    }

    // Step 4: Display loop for n students
    printf("\n========= Student Information =========\n");
    for (int i = 0; i < n; i++)
    {
        displayStudent(students[i]);
    }

    // Step 5: Free allocated memory
    free(students);

    return 0;
}
