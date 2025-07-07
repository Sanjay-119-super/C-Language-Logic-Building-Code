#include <stdio.h>

// Macro for constant value of PI (avoid magic numbers)
#define PI 3.14159f

/*
    Function: calculateCircleArea
    Purpose:
        - Kisi bhi circle ka area calculate karta hai
    Parameters:
        - float radius: Circle ka radius
    Returns:
        - float: Circle ka area
    Use Case:
        - Geometry calculator, design tools, measurement software, etc.
*/
float calculateCircleArea(float radius)
{
    if (radius < 0)
    {
        printf("Invalid radius! Radius should be positive.\n");
        return -1.0f;
    }

    return PI * radius * radius;
}

/*
    Function: calculateSimpleInterest
    Purpose:
        - Simple Interest calculate karta hai
    Parameters:
        - float principal: Principal amount
        - float time: Time duration (in years)
        - float rate: Interest rate (% per annum)
    Returns:
        - float: Simple Interest amount
    Use Case:
        - Banking, financial calculators, EMI systems
*/
float calculateSimpleInterest(float principal, float time, float rate)
{
    if (principal < 0 || time < 0 || rate < 0)
    {
        printf("Invalid input! Principal, Time and Rate should be non-negative.\n");
        return -1.0f;
    }

    return (principal * time * rate) / 100.0f;
}

/*
    Function: isEven
    Purpose:
        - Check karta hai ki number even hai ya nahi
    Parameters:
        - int number
    Returns:
        - 1 agar even hai, 0 agar odd hai
    Use Case:
        - Number filters, logic conditions, parity check
*/
int isEven(int number)
{
    return number % 2 == 0;
}

/*
    Function: printNaturalNumbers
    Purpose:
        - 1 se n tak natural numbers print karta hai
    Parameters:
        - int n
    Returns:
        - int: Last number printed (ya error code)
    Use Case:
        - Number sequences, loop practice, UI number lists
*/
int printNaturalNumbers(int n)
{
    if (n <= 0)
    {
        printf("Invalid input! n should be greater than 0.\n");
        return -1;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return n;
}

/*
    Function: printFirstNOddNumbers
    Purpose:
        - Pehle n odd numbers print karta hai
    Parameters:
        - int n
    Returns:
        - int: Total numbers printed (ya error code)
    Use Case:
        - Pattern generation, number logic practice
*/
int printFirstNOddNumbers(int n)
{
    if (n <= 0)
    {
        printf("Invalid input! n should be greater than 0.\n");
        return -1;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i - 1);
    }

    return n;
}

/*
    Function: main
    Purpose:
        - Sabhi logic functions ko test karta hai
        - Production me entry point ke roop me use hota hai
    Use Case:
        - Application starter, control manager
*/
int main()
{
    // Circle Area
    float area = calculateCircleArea(4.0f);
    if (area != -1.0f)
        printf("Area of Circle: %.2f\n", area);

    // Simple Interest
    float si = calculateSimpleInterest(1000.0f, 2.0f, 5.0f);
    if (si != -1.0f)
        printf("Simple Interest: %.2f\n", si);

    // Even Check
    int number = 6;
    if (isEven(number))
        printf("%d is Even\n", number);
    else
        printf("%d is Odd\n", number);

    // Natural Numbers
    int lastNatural = printNaturalNumbers(10);
    if (lastNatural != -1)
        printf("\nLast Printed Natural Number: %d\n", lastNatural);

    // Odd Numbers
    int totalOdd = printFirstNOddNumbers(10);
    if (totalOdd != -1)
        printf("\nTotal Odd Numbers Printed: %d\n", totalOdd);

    return 0;
}
