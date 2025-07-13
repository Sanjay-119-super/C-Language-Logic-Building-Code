#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 10 // Maximum number of employees supported

// ==========================================
// 🔸 Structure: Employee
// Purpose: Ek employee ka pura data hold karta hai
// Fields:
//    - id: Unique identifier of employee
//    - name: Employee name (string of max 20 chars)
//    - salary: Employee salary
// ==========================================
struct Employee
{
    int id;
    char name[20];
    float salary;
};

// ==========================================
// 🔸 Function: inputEmployee
// Purpose: Ek employee ka data input lena user se
// Params: none
// Return: filled Employee structure
// ==========================================
struct Employee inputEmployee()
{
    struct Employee e;

    printf("\nEnter Employee ID: ");
    scanf("%d", &e.id);

    getchar(); // Clear input buffer to avoid skipping fgets

    printf("Enter Employee Name: ");
    fgets(e.name, 20, stdin); // Allows name with spaces

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    return e; // Return the filled employee struct
}

// ==========================================
// 🔸 Function: displayEmployee
// Purpose: Ek employee ka data print/display karna
// Params:
//    - e: Employee structure
// Return: none
// ==========================================
void displayEmployee(struct Employee e)
{
    printf("ID: %d | Name: %s | Salary: %.2f\n", e.id, e.name, e.salary);
}

// ==========================================
// 🔸 Function: findMaxSalaryEmployee
// Purpose: Maximum salary wala employee dhoondhna array me se
// Params:
//    - emp[]: array of Employee structures
//    - n: number of employees
// Return: Employee struct jiska salary highest hai
// ==========================================
struct Employee findMaxSalaryEmployee(struct Employee emp[], int n)
{
    struct Employee maxEmp = emp[0]; // Assume first employee has max salary

    for (int i = 1; i < n; i++)
    {
        if (emp[i].salary > maxEmp.salary)
        {
            maxEmp = emp[i]; // Update max if current is higher
        }
    }
    return maxEmp;
}

// ==========================================
// 🔸 Function: sortEmployeesBySalary
// Purpose: Employee array ko salary ke basis par descending order me sort karna
// Params:
//    - emp[]: Employee array
//    - n: number of employees
// Return: none (modifies array in place)
// ==========================================
void sortEmployeesBySalary(struct Employee emp[], int n)
{
    struct Employee temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (emp[i].salary < emp[j].salary)
            {
                // Swap emp[i] and emp[j] to maintain descending order
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}

// ==========================================
// 🔸 Function: sortEmployeesByName
// Purpose: Employee array ko alphabetically A-Z sort karna name ke basis pe
// Params:
//    - emp[]: Employee array
//    - n: number of employees
// Return: none (modifies array in place)
// ==========================================
void sortEmployeesByName(struct Employee emp[], int n)
{
    struct Employee temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(emp[i].name, emp[j].name) > 0)
            {
                // Swap if current name is lexicographically larger than next
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}

// ==========================================
// 🔸 Function: main
// Purpose: Program ka entry point - saare features call karta hai
// Flow:
//    1. Take input of all employees
//    2. Find and display max salary employee
//    3. Sort by salary descending and display
//    4. Sort by name ascending and display
// ==========================================
int main()
{
    struct Employee employees[MAX_EMPLOYEES]; // Array to store all employee data

    // Step 1: Input employee data
    printf("Enter details for %d employees:\n", MAX_EMPLOYEES);
    for (int i = 0; i < MAX_EMPLOYEES; i++)
    {
        employees[i] = inputEmployee();
    }

    // Step 2: Find employee with highest salary
    struct Employee maxSalaryEmployee = findMaxSalaryEmployee(employees, MAX_EMPLOYEES);
    printf("\n===============================");
    printf("\nEmployee with Highest Salary:\n");
    displayEmployee(maxSalaryEmployee);

    // Step 3: Sort employees by salary (descending order)
    sortEmployeesBySalary(employees, MAX_EMPLOYEES);
    printf("\n===============================");
    printf("\nEmployees Sorted by Salary (High to Low):\n");
    for (int i = 0; i < MAX_EMPLOYEES; i++)
    {
        displayEmployee(employees[i]);
    }

    // Step 4: Sort employees by name (A-Z)
    sortEmployeesByName(employees, MAX_EMPLOYEES);
    printf("\n===============================");
    printf("\nEmployees Sorted by Name (A to Z):\n");
    for (int i = 0; i < MAX_EMPLOYEES; i++)
    {
        displayEmployee(employees[i]);
    }

    return 0; // Successful termination
}
