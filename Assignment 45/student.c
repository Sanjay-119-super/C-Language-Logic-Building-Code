#include <stdio.h>

#define MAX_STUDENTS 10 // Maximum number of students

// ===========================================
// 🔸 Structure: Student
// Purpose: Ek student ka data store karna
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
// Purpose: Ek student ka data input lena
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
// Purpose: Ek student ka data display karna
// ===========================================
void displayStudent(struct Student s)
{
    printf("Roll Number: %d | Name: %s | Marks: %.2f\n", s.rollNumber, s.name, s.marks);
}

// ===========================================
// 🔸 Main Function
// Purpose: Program ka entry point
// ===========================================
int main()
{
    struct Student students[MAX_STUDENTS];

    printf("Enter information for %d students:\n", MAX_STUDENTS);

    // Step 1: Input loop
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        students[i] = inputStudent();
    }

    // Step 2: Display loop
    printf("\n========= Student Information =========\n");
    for (int i = 0; i < MAX_STUDENTS; i++)
    {
        displayStudent(students[i]);
    }

    return 0;
}
