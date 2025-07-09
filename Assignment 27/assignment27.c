#include<stdio.h>

/********************************************************************
 * Function: sum
 * Purpose: 1 se 'num' tak ke natural numbers ka sum calculate karta hai
 * Parameters: 
 *   num - integer, jahan tak ka sum nikalna hai (num >= 0)
 * Return: Sum of natural numbers (integer)
 * Real-World Example: 
 *   Ek stair case mein 'n' steps banane mein kitne bricks lagenge
 * Logic:
 *   - Base case: num <= 0 -> return 0
 *   - Recursive: num + sum(num-1)
 * Example: sum(5) = 5+4+3+2+1 = 15
 * 
 * Time Complexity: O(n)
 *   → Kyunki har number ke liye ek baar function call hoti hai (n se 1 tak)
 * Space Complexity: O(n)
 *   → Har recursive call stack me store hoti hai jab tak base case na mile
 ********************************************************************/
int sum(int num)
{
    if(num <= 0) return 0;
    return num + sum(num-1);
}

/********************************************************************
 * Function: oddSum
 * Purpose: 1 se 'num' tak ke odd numbers ka sum calculate karta hai
 * Parameters: 
 *   num - integer, range ka upper limit (num >= 0)
 * Return: Sum of odd numbers (integer)
 * Real-World Example: 
 *   Ek building mein odd-numbered floors par kitne LED bulbs hain
 * Logic:
 *   - Base case: num <= 0 -> return 0
 *   - Agar num odd hai: num + oddSum(num-1)
 *   - Agar num even hai: oddSum(num-1)
 * Example: oddSum(5) = 5+3+1 = 9
 * 
 * Time Complexity: O(n)
 *   → 1 se n tak har number ke liye ek baar call hoti hai
 * Space Complexity: O(n)
 *   → Har call stack me jayegi jab tak base case nahi milta
 ********************************************************************/
int oddSum(int num)
{
    if(num <= 0) return 0;
    if(num%2 != 0)
        return num + oddSum(num-1);
    else
        return oddSum(num-1);
}

/********************************************************************
 * Function: evenSum
 * Purpose: 2 se 'num' tak ke even numbers ka sum calculate karta hai
 * Parameters: 
 *   num - integer, range ka upper limit (num >= 0)
 * Return: Sum of even numbers (integer)
 * Real-World Example: 
 *   School mein even roll numbers wale bachhon ke total marks
 * Logic:
 *   - Base case: num <= 1 -> return 0
 *   - Agar num even hai: num + evenSum(num-1)
 *   - Agar num odd hai: evenSum(num-1)
 * Example: evenSum(5) = 4+2 = 6
 * 
 * Time Complexity: O(n)
 *   → 1 se n tak har number ke liye ek baar recursive call lagti hai
 * Space Complexity: O(n)
 *   → Recursive calls stack me store hoti hain (LIFO)
 ********************************************************************/
int evenSum(int num)
{
    if (num <= 1) return 0;
    if(num%2 == 0)
        return num + evenSum(num-1);
    else
        return evenSum(num-1);
}

/********************************************************************
 * Function: square
 * Purpose: 1 se 'num' tak ke numbers ke squares ka sum calculate karta hai
 * Parameters: 
 *   num - integer, jahan tak ke squares ka sum nikalna hai (num >= 0)
 * Return: Sum of squares (integer)
 * Real-World Example: 
 *   Chess board par kitne squares hain (1x1 + 2x2 + ... + 8x8)
 * Logic:
 *   - Base case: num <= 0 -> return 0
 *   - Recursive: (num*num) + square(num-1)
 * Example: square(3) = 1² + 2² + 3² = 1+4+9=14
 * 
 * Time Complexity: O(n)
 *   → n numbers ka square nikal kar add karna hai
 * Space Complexity: O(n)
 *   → Recursive stack me n calls store hoti hain
 ********************************************************************/
int square(int num)
{
    if(num <= 0) return 0;
    return num*num + square(num-1);
}

/********************************************************************
 * Function: sumOfDigit
 * Purpose: Kisi number ke sabhi digits ka sum calculate karta hai
 * Parameters: 
 *   num - integer, jiske digits ka sum nikalna hai
 * Return: Sum of digits (integer)
 * Real-World Example: 
 *   Numerology mein "Destiny Number" calculate karna
 * Logic:
 *   - Base case: num <= 0 -> return 0
 *   - Recursive: (last digit) + sumOfDigit(remaining number)
 * Example: sumOfDigit(123) = 3 + 2 + 1 = 6
 * 
 * Time Complexity: O(d)
 *   → jaha d = number of digits in num (e.g., 12345 → 5 digits → 5 calls)
 * Space Complexity: O(d)
 *   → Har digit ke liye ek recursive call stack me store hoti hai
 ********************************************************************/
int sumOfDigit(int num)
{
    if(num <= 0) return 0;
    return num%10 + sumOfDigit(num/10);
}

int main()
{
    // Uncomment to test
    /*
    printf("Natural Sum: %d\n", sum(5));          // 15
    printf("Odd Sum: %d\n", oddSum(5));           // 9
    printf("Even Sum: %d\n", evenSum(5));         // 6
    printf("Square Sum: %d\n", square(5));        // 55 (1+4+9+16+25)
    */
    printf("Digit Sum: %d\n", sumOfDigit(12345)); // 15 (1+2+3+4+5)
    return 0;
}
