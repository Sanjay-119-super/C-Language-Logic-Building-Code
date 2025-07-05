#include <stdio.h>
#include <stdlib.h>

/**
 * FUNCTION: printDayInMonth
 * 
 * PURPOSE:
 *   User se month number input le kar us month mein kitne din hote hain wo print karta hai.
 * 
 * WHY:
 *   Useful in calendar apps, date validators, or business logic where month-days are needed.
 * 
 * LOGIC:
 *   - Months with 31 days: Jan, Mar, May, Jul, Aug, Oct, Dec
 *   - Months with 30 days: Apr, Jun, Sep, Nov
 *   - February special case (28 or 29)
 * 
 * USE CASE:
 *   - Date range validation
 *   - Monthly reports
 *   - Billing cycles
 */
void printDayInMonth()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 Days");
            break;

        case 4: case 6: case 9: case 11:
            printf("30 Days");
            break;

        case 2:
            printf("28/29 Days");
            break;

        default:
            printf("Invalid Month Number");
    }
}


/**
 * FUNCTION: menu
 * 
 * PURPOSE:
 *   A continuous loop-based calculator menu allowing user to perform +, -, *, /
 * 
 * WHY:
 *   Useful for CLI-based utility apps and calculator training logic.
 * 
 * LOGIC:
 *   Based on user choice (1-4), arithmetic operation is done on input numbers.
 * 
 * USE CASE:
 *   - Command line tools
 *   - Calculator-based interviews
 *   - Learning menu-driven logic
 */
void menu()
{
    while (1)
    {
        int a, b, num;
        printf("1 -> Addition\n");
        printf("2 -> Subtraction\n");
        printf("3 -> Multiplication\n");
        printf("4 -> Division\n");
        printf("5 -> Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &num);

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch (num)
        {
            case 1:
                printf("Addition -> %d\n", a + b);
                break;
            case 2:
                printf("Subtraction -> %d\n", a - b);
                break;
            case 3:
                printf("Multiplication -> %d\n", a * b);
                break;
            case 4:
                if (b == 0)
                    printf("Error: Division by zero\n");
                else
                    printf("Division -> %d\n", a / b);
                break;
            case 5:
                exit(0);
            default:
                printf("INVALID CHOICE\n");
        }
    }
}


/**
 * FUNCTION: weekDay
 * 
 * PURPOSE:
 *   Map number (1–7) to week days like Monday to Sunday.
 * 
 * WHY:
 *   Helps in any app where numeric weekday input is mapped to its name.
 * 
 * LOGIC:
 *   Simple 1-to-7 mapping using switch-case.
 * 
 * USE CASE:
 *   - Calendar UIs
 *   - Scheduling systems
 *   - Reminder tools
 */
void weekDay()
{
    int dayNum;
    printf("Enter a number (1-7): ");
    scanf("%d", &dayNum);

    switch (dayNum)
    {
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        case 7: printf("Sunday"); break;
        default: printf("Invalid Day");
    }
}


/**
 * FUNCTION: menu2
 * 
 * PURPOSE:
 *   Check if a triangle is Isosceles, Right-Angled or Equilateral.
 * 
 * WHY:
 *   Used in geometry tools, educational apps, or game logic.
 * 
 * LOGIC:
 *   Based on triangle side inputs:
 *   - Isosceles: At least 2 sides equal
 *   - Right-angled: Apply Pythagoras
 *   - Equilateral: All 3 sides equal
 * 
 * USE CASE:
 *   - School-level geometry apps
 *   - CAD systems
 *   - Puzzle games
 */
void menu2()
{
    int a, b, c, num;

    printf("1 -> Check Valid Isosceles Triangle\n");
    printf("2 -> Check Valid Right-Angle Triangle\n");
    printf("3 -> Check Valid Equilateral Triangle\n");
    printf("4 -> Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &num);

    printf("Enter the lengths of triangle sides: ");
    scanf("%d %d %d", &a, &b, &c);

    switch (num)
    {
        case 1:
            if (a == b || b == c || c == a)
                printf("Valid Isosceles Triangle\n");
            else
                printf("Invalid Isosceles Triangle\n");
            break;

        case 2:
            // Check all 3 combinations since largest side isn't guaranteed
            if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
                printf("Valid Right-Angle Triangle\n");
            else
                printf("Invalid Right-Angle Triangle\n");
            break;

        case 3:
            if (a == b && b == c)
                printf("Valid Equilateral Triangle\n");
            else
                printf("Invalid Equilateral Triangle\n");
            break;

        case 4:
            exit(0);
        default:
            printf("INVALID CHOICE\n");
    }
}


/**
 * FUNCTION: print
 * 
 * PURPOSE:
 *   Takes a number and prints "Good", "Better", or "Best" accordingly.
 * 
 * WHY:
 *   Used in rating systems or level-based feedback.
 * 
 * LOGIC:
 *   - 1 -> Good
 *   - 2 -> Better
 *   - 3 -> Best
 * 
 * USE CASE:
 *   - Review apps
 *   - Grading systems
 *   - Personal feedback tools
 */
void print()
{
    int var;
    printf("Enter a number (1–3): ");
    scanf("%d", &var);

    switch (var)
    {
        case 1: printf("Good"); break;
        case 2: printf("Better"); break;
        case 3: printf("Best"); break;
        default: printf("INVALID");
    }
}


/**
 * FUNCTION: main
 * 
 * PURPOSE:
 *   Entry point of the program. Uncomment desired function call to test.
 */
int main()
{
    // printDayInMonth();
    // menu();
    // weekDay();
    // menu2();
    print();

    return 0;
}
