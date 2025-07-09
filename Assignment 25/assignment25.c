#include<stdio.h>

/**************************************************************************************
 * Function: p1
 * Purpose: Recursion use karke 0 se lekar `n` tak ke numbers ascending order mein print karta hai
 * Parameters: 
 *   n - integer, jahan tak numbers print karne hain (expected: n >= 0)
 * Return: Kuch return nahi karta (void)
 * Real-World Example: 
 *   ATM se note nikalna: 0 (no note) se shuru karke 10, 20, ... n tak ke notes
 * Working:
 *   - Pehle recursion se 0 tak pahunchta hai
 *   - Wapas aate waqt numbers print karta hai (0,1,2...n)
 * Note: 
 *   Agar n negative diya to stack overflow ho sakta hai
 **************************************************************************************/
void p1(int n) {
    if(n != 0)
        p1(n-1);        // Pichle number ke liye recursion call (0 tak)
    printf("%d ",n);    // Current number ko print karo (chhote se bade ki taraf)
}

/**************************************************************************************
 * Function: p2
 * Purpose: Recursion use karke `n` se lekar 1 tak numbers descending order mein print karta hai
 * Parameters: 
 *   n - integer, jahan se numbers print shuru karne hain (expected: n >= 0)
 * Return: Kuch return nahi karta (void)
 * Real-World Example: 
 *   Birthday cake ki 10 candles bujhana: 10,9,8,...1
 * Working:
 *   - Pehle current number print karta hai
 *   - Phir next chhote number ke liye recursion call karta hai
 * Note:
 *   Agar n=0 diya to kuch print nahi hoga
 **************************************************************************************/
void p2(int n) {
    if(n == 0) return;   // Base case: 0 pe ruk jao (candle bujh chuki hai)
    printf("%d ", n);    // Current number print karo (bade se chhote ki taraf)
    p2(n-1);            // Next chhota number ke liye recursion
}

/**************************************************************************************
 * Function: p3
 * Purpose: Recursion use karke 1 se `num` tak ke odd numbers ascending order mein print karta hai
 * Parameters: 
 *   num - integer, jahan tak odd numbers print karne hain (expected: num >= 0)
 * Return: Kuch return nahi karta (void)
 * Real-World Example: 
 *   Ghar mein odd-numbered floors (1,3,5,...) par light bulb replace karna
 * Working:
 *   - Pehle recursion se 0 tak pahunchta hai
 *   - Wapas aate waqt odd numbers check karta hai
 * Note:
 *   0 ko skip karta hai (kyunki 0 even hai)
 **************************************************************************************/
void p3(int num) {
    if(num != 0) 
        p3(num-1);          // Pehle 0 se num-1 tak ke liye recursion
    if(num % 2 != 0)        // Check karo ki number odd hai ya nahi
        printf("%d ",num);  // Odd hai to print karo
}

/**************************************************************************************
 * Function: p4
 * Purpose: Recursion use karke `n` se lekar 1 tak ke odd numbers descending order mein print karta hai
 * Parameters: 
 *   n - integer, jahan se odd numbers print shuru karne hain (expected: n >= 0)
 * Return: Kuch return nahi karta (void)
 * Real-World Example: 
 *   Lift se utarte waqt sirf odd floors (9,7,5,...) par rukna
 * Working:
 *   - Pehle current number check karta hai (agar odd hai to print)
 *   - Phir next chhote number ke liye recursion call karta hai
 * Note:
 *   Agar n negative diya to base case hit nahi hoga (crash)
 **************************************************************************************/
void p4(int n) {
    if(n == 0) return;     // Base case: basement floor, ruk jao
    if(n % 2 != 0)
        printf("%d " ,n);  // Agar n odd hai to print karo
    p4(n-1);              // Next chhota number ke liye recursion
}

/**************************************************************************************
 * Function: p5
 * Purpose: Recursion use karke 2 se `n` tak ke even numbers ascending order mein print karta hai
 * Parameters: 
 *   n - integer, jahan tak even numbers print karne hain (expected: n >= 1)
 * Return: Kuch return nahi karta (void)
 * Real-World Example: 
 *   School mein even roll numbers (2,4,6,...) ko prize dena
 * Working:
 *   - Pehle recursion se 1 tak pahunchta hai
 *   - Wapas aate waqt even numbers check karta hai
 * Note:
 *   1 ko automatically skip karta hai (kyunki 1 odd hai)
 **************************************************************************************/
void p5(int n) {
    if(n != 1)
        p5(n-1);          // Pehle 1 tak ke numbers check karo
    if(n % 2 == 0)
        printf("%d ",n);  // Even number hai to print karo
}

int main()
{
    // Testing ke liye functions ko uncomment karo:

    // p1(10);  // Output: 0 1 2 3 4 5 6 7 8 9 10
    // p2(10);  // Output: 10 9 8 7 6 5 4 3 2 1
    // p3(10);  // Output: 1 3 5 7 9
    // p4(10);  // Output: 9 7 5 3 1 (Note: 10 even hai, isliye 10 print nahi hoga)
    p5(10);    // Output: 2 4 6 8 10

    return 0;
}