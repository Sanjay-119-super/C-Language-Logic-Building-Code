#include<stdio.h>

/******************************************************************************
 * Function: fact
 * Purpose : Kisi bhi number ka factorial nikalta hai using recursion
 * Params  : 
 *   - num (int): Jiska factorial nikalna hai
 * Returns : 
 *   - (int): Factorial value
 * Logic   :
 *   - Base case: num == 0 ya 1 ho to return 1
 *   - Recursive case: num * fact(num - 1)
 * Real-World Use:
 *   - Combinations & Permutations (nCr, nPr)
 *   - Probability & Statistics
 *   - Pascal Triangle & Series Computation
 ******************************************************************************/
int fact(int num)
{
    if(num==0 || num==1) 
        return 1;
    return num * fact(num - 1);
}


/******************************************************************************
 * Function: HCF_helper
 * Purpose : Helper function jo recursion se HCF (Highest Common Factor) nikalta hai
 * Params  : 
 *   - n1 (int): First number
 *   - n2 (int): Second number
 *   - min (int): Current minimum value to check HCF
 * Returns : 
 *   - (int): HCF of n1 and n2
 * Logic   :
 *   - Base case: Agar min == 1 → return 1
 *   - Agar min dono number ko divide karta hai → wohi HCF hai
 *   - Nahi to min - 1 se recursive call
 * Real-World Use:
 *   - Fraction simplification
 *   - LCM calculation
 ******************************************************************************/
int HCF_helper(int n1, int n2, int min)
{
    if(min == 1) 
        return 1;

    if(n1 % min == 0 && n2 % min == 0)
        return min;

    return HCF_helper(n1, n2, min - 1);
}


/******************************************************************************
 * Function: HCF
 * Purpose : Public interface to find HCF using recursion
 * Params  : 
 *   - n1, n2 (int): Do numbers jinka HCF nikalna hai
 * Returns :
 *   - (int): HCF of the two numbers
 * Logic   :
 *   - Pehle minimum nikal ke helper function ko call karte hai
 ******************************************************************************/
int HCF(int n1, int n2)
{
    int min = (n1 < n2) ? n1 : n2;
    return HCF_helper(n1, n2, min);
}


/******************************************************************************
 * Function: fibo
 * Purpose : Fibonacci series ke pehle n numbers print karta hai (using recursion)
 * Params  : 
 *   - a (int): Current Fibonacci number
 *   - b (int): Next Fibonacci number
 *   - n (int): Kitne numbers aur bache hai print karne
 * Returns :
 *   - void (prints only)
 * Logic   :
 *   - Base case: Agar n == 0 → print khatam
 *   - Recursive: Print a, phir fibo(b, a+b, n-1)
 * Real-World Use:
 *   - Finance (growth patterns), Algorithm design (e.g. DP), Natural patterns
 ******************************************************************************/
void fibo(int a, int b, int n)
{
    if(n == 0)
        return;

    printf("%d ", a);
    fibo(b, a + b, n - 1);
}


/******************************************************************************
 * Function: digitCount
 * Purpose : Kisi number me kitne digits hai ye count karta hai
 * Params  :
 *   - n (int): Jiska digit count nikalna hai
 * Returns :
 *   - (int): Number of digits
 * Logic   :
 *   - Base case: Agar number < 10 → sirf 1 digit
 *   - Recursive: 1 + digitCount(n / 10)
 * Real-World Use:
 *   - Input validation, number formatting, digit analysis
 ******************************************************************************/
int digitCount(int n)
{
    if(n == 0)
        return 0;
    return 1 + digitCount(n / 10);
}


/******************************************************************************
 * Function: power
 * Purpose : Power calculate karta hai (a^b) using recursion
 * Params  :
 *   - a (int): Base number
 *   - b (int): Exponent (power)
 * Returns :
 *   - (int): Result of a raised to the power b
 * Logic   :
 *   - Base case: Agar b == 0 → return 1
 *   - Recursive: a * power(a, b - 1)
 * Real-World Use:
 *   - Scientific calculations, financial growth, encryption, recursion practice
 ******************************************************************************/
int power(int a, int b)
{
    if(b == 0)
        return 1;
    return a * power(a, b - 1);
}


int main()
{
    /*************** Uncomment lines for testing ******************
    int f = fact(5);
    printf("Factorial: %d\n", f);

    int hcf = HCF(15, 30);
    printf("HCF: %d\n", hcf);

    printf("Fibonacci Series: ");
    fibo(0, 1, 10);
    printf("\n");

    int c = digitCount(123345);
    printf("Digit Count: %d\n", c);
    **************************************************************/

    int p = power(2, 3);
    printf("Power: %d\n", p);  // Output: 8

    return 0;
}
