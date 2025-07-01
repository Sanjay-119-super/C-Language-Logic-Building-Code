#include <stdio.h>

/*
--------------------------------------------------------
|     Loop Practice using Basic Number Patterns        |
|  Purpose: Looping logic build karna for interviews   |
|  Use Case: Number pattern problems, sequence logic   |
--------------------------------------------------------
*/

// Function: print1
// Purpose : Fixed text ko multiple times print karna
// Logic   : Loop ko 5 baar chala ke same message print
// Use     : Loops ke basic syntax aur usage practice ke liye
void print1()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("MySirG \n"); // Fixed message print hoga 5 times
    }
}

// Function: print2
// Purpose : 1 se 10 tak natural numbers print karna
// Use     : Forward counting logic and loop use samajhna
void print2()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i); // 1 2 3 ... 10
    }
}

// Function: print3
// Purpose : Reverse counting from 10 to 1
// Use     : Backward loop logic samajhne ke liye
void print3()
{
    for (int i = 10; i >= 1; i--)
    {
        printf("%d ", i); // 10 9 8 ... 1
    }
}

// Function: print4
// Purpose : First 10 odd numbers print karna
// Logic   : Formula (2*i - 1) se odd numbers nikalte hain
// Use     : Mathematical patterns samajhne ke liye
void print4()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", (i * 2) - 1); // 1 3 5 ... 19
    }
}

// Function: print5
// Purpose : First 10 odd numbers in reverse
// Use     : Loop ko reverse direction me chala ke pattern print karna
void print5()
{
    for (int i = 10; i >= 1; i--)
    {
        printf("%d ", (i * 2) - 1); // 19 17 15 ... 1
    }
}

// Function: print6
// Purpose : First 10 even numbers print karna
// Logic   : Formula (2*i) se even numbers milte hain
// Use     : Simple math pattern generation
void print6()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i * 2); // 2 4 6 ... 20
    }
}

// Function: print7
// Purpose : First 10 even numbers in reverse
// Use     : Reverse loop with even number logic
void print7()
{
    for (int i = 10; i >= 1; i--)
    {
        printf("%d ", i * 2); // 20 18 ... 2
    }
}

// Function: print8
// Purpose : 1 se 10 tak numbers ke square print karna
// Use     : Area, square pattern, power-related problems ke liye useful
void print8()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i * i); // 1 4 9 ... 100
    }
}

// Function: print9
// Purpose : 1 se 10 tak numbers ke cube print karna
// Use     : Volume ya power of 3 concept ke liye use hota hai
void print9()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i * i * i); // 1 8 27 ... 1000
    }
}

// Function: print10
// Purpose : 5 ka multiplication table print karna
// Use     : Table generation for math logic, repeated pattern
void print10()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", 5 * i); // 5 10 15 ... 50
    }
}

// Main driver function
// Purpose: Sare loop functions ko test/run karna
int main()
{
    // Uncomment karke kisi bhi function ko test kar sakte ho

    // print1();  // Repeated text
    // print2();  // 1 to 10
    // print3();  // 10 to 1
    // print4();  // Odd numbers
    // print5();  // Reverse odd numbers
    // print6();  // Even numbers
    // print7();  // Reverse even numbers
    // print8();  // Square values
    // print9();  // Cube values
    print10();     // Table of 5

    return 0;
}
