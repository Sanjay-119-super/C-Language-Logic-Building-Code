#include<stdio.h>

/********************************************************************
 * Function: p1
 * Purpose: Recursion se 'num' se lekar 1 tak ke even numbers descending order mein print karta hai
 * Parameters: 
 *   num - integer, jahan se counting shuru hogi (num >= 1)
 * Return: void (kuch return nahi karta)
 * Real-World Example: 
 *   Building mein even-numbered floors (10,8,6...) se lift utarte waqt display karna
 * Working:
 *   - Pehle current number check karta hai (even hai toh print)
 *   - Phir next chhote number (num-1) ke liye recursion call karta hai
 * Note: 
 *   Agar num=0 diya toh kuch print nahi hoga
 *   Example: p1(10) -> 10 8 6 4 2
 ********************************************************************/
void p1(int num)
{
    if(num==0) return;       // Base case: 0 pe ruk jao
    if(num%2==0)             // Agar number even hai
        printf("%d ",num);   // Usko print karo
    p1(num-1);               // Next chhote number ke liye recursion
}

/********************************************************************
 * Function: p2
 * Purpose: Recursion se 1 se lekar 'num' tak ke squares ascending order mein print karta hai
 * Parameters: 
 *   num - integer, jahan tak ke numbers ka square print karna hai (num >= 1)
 * Return: void
 * Real-World Example: 
 *   Maths class mein 1 se n tak ke squares ka chart banana (1,4,9...)
 * Working:
 *   - Pehle 1 se num-1 tak ke squares recursion se print karwata hai
 *   - Phir current number (num) ka square print karta hai
 * Note:
 *   Base case: num=1 pe ruk jata hai
 *   Example: p2(10) -> 1 4 9 16 25 36 49 64 81 100
 ********************************************************************/
void p2(int num)
{
    if(num != 1)             // Jab tak 1 nahi pahunchte
        p2(num-1);           // Pehle chhote numbers ke squares print karo
    printf("%d ",num*num);   // Current number ka square print karo
}

/********************************************************************
 * Function: p3
 * Purpose: Recursion se decimal number ko binary format mein convert karke print karta hai
 * Parameters: 
 *   dec - integer, decimal number jisko binary mein badalna hai (dec > 0)
 * Return: void
 * Real-World Example: 
 *   Computer memory mein decimal ko binary mein represent karna
 * Working:
 *   - Pehle quotient (dec/2) ko recursion se process karta hai
 *   - Phir remainder (dec%2) print karta hai
 *   - Ye MSB (Most Significant Bit) se LSB (Least Significant Bit) tak print karta hai
 * Note:
 *   Binary digits ko sahi order mein print karta hai
 *   Example: p3(10) -> 1 0 1 0 (kyunki 10 decimal = 1010 binary)
 ********************************************************************/
void p3(int dec)
{
    if(dec != 1)             // Base case: jab tak 1 nahi ho jata
        p3(dec/2);           // Next quotient ke liye recursion
    printf("%d ",dec%2);     // Remainder (binary digit) print karo
}

/********************************************************************
 * Function: p4
 * Purpose: Recursion se decimal number ko octal format mein convert karke print karta hai
 * Parameters: 
 *   dec - integer, decimal number jisko octal mein badalna hai (dec > 0)
 * Return: void
 * Real-World Example: 
 *   Unix file permissions ko octal format mein display karna
 * Working:
 *   - Pehle quotient (dec/8) ko recursion se process karta hai
 *   - Phir remainder (dec%8) print karta hai
 *   - Ye MSD (Most Significant Digit) se LSD (Least Significant Digit) tak print karta hai
 * Note:
 *   Octal digits ko sahi order mein print karta hai
 *   Example: p4(100) -> 1 4 4 (kyunki 100 decimal = 144 octal)
 ********************************************************************/
void p4(int dec)
{
    if(dec != 1)             // Base case: jab tak 1 nahi ho jata
        p4(dec/8);           // Next quotient ke liye recursion
    printf("%d ",dec%8);      // Remainder (octal digit) print karo
}

/********************************************************************
 * Function: p5
 * Purpose: Recursion se number ke digits ko reverse order mein print karta hai
 * Parameters: 
 *   num - integer, jiske digits ko reverse karna hai (num != 0)
 * Return: void
 * Real-World Example: 
 *   ATM transaction mein PIN ko security ke liye reverse display karna
 * Working:
 *   - Pehle last digit (num%10) print karta hai
 *   - Phir bachi hui number (num/10) ke liye recursion call karta hai
 *   - Ye number ko ulta print karta hai
 * Note:
 *   Agar number 0 diya gaya toh kuch print nahi hoga
 *   Example: p5(123) -> 3 2 1
 ********************************************************************/
void p5(int num)
{
    if(num == 0) return;     // Base case: number khatam
    printf("%d ",num%10);    // Last digit print karo
    p5(num/10);              // Bacha hua number ke liye recursion
}

int main()
{
    // Testing ke liye functions ko uncomment karo:
    // p1(10);  // Output: 10 8 6 4 2
    // p2(10);  // Output: 1 4 9 16 25 36 49 64 81 100
    // p3(10);  // Output: 1 0 1 0
    // p4(100); // Output: 1 4 4
    p5(123);   // Output: 3 2 1

    return 0;
}