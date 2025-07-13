#include <stdio.h>

#define SUBJECTS 5 // Number of subjects

// ======================================
// 🔸 Structure: Student
// Purpose: Har student ka data store karna
// Fields: enrollNumber, name, marks[5], percentage
// ======================================
struct Student
{
    int enrollNumber;
    char name[50];
    float marks[SUBJECTS];
    float percentage;
};

// ======================================
// 🔸 Function: inputStudent
// Purpose: Ek student ka pura data lena including 5 subjects marks
// ======================================
struct Student inputStudent()
{
    struct Student s;
    float totalMarks = 0;

    printf("\nEnter Enroll Number: ");
    scanf("%d", &s.enrollNumber);

    getchar(); // Clear input buffer
    printf("Enter Name: ");
    fgets(s.name, 50, stdin);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < SUBJECTS; i++)
    {
        printf("Subject %d Marks: ", i + 1);
        scanf("%f", &s.marks[i]);
        totalMarks += s.marks[i];
    }

    // Calculate percentage
    s.percentage = (totalMarks / (SUBJECTS * 100)) * 100; // Assuming each subject is out of 100

    return s;
}

// ======================================
// 🔸 Function: displayStudent
// Purpose: Ek student ka data display karna
// ======================================
void displayStudent(struct Student s)
{
    printf("Enroll Number: %d | Name: %s", s.enrollNumber, s.name);

    printf("Marks: ");
    for (int i = 0; i < SUBJECTS; i++)
    {
        printf("%.2f ", s.marks[i]);
    }

    printf("| Percentage: %.2f%%\n", s.percentage);
}

// ======================================
// 🔸 Main Function
// ======================================
int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input data for all students
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for Student %d:\n", i + 1);
        students[i] = inputStudent();
    }

    // Display data for all students
    printf("\n========= Student Information =========\n");
    for (int i = 0; i < n; i++)
    {
        displayStudent(students[i]);
    }

    return 0;
}
