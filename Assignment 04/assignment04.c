#include <stdio.h>

/**
 * Function: sizeOfChar
 * Purpose : Ek character variable ka memory size print karta hai (in bytes)
 */
void sizeOfChar() {
    char c = 'A';
    printf("Size of char: %zu bytes\n", sizeof(c));
}

/**
 * Function: sizeOfReal
 * Purpose : Ek float (real number) variable ka memory size print karta hai
 */
void sizeOfReal() {
    float f = 1.5;
    printf("Size of float (real constant): %zu bytes\n", sizeof(f));
}

/**
 * Function: changeValue
 * Purpose : Ek character ko 1 se increment karna (ASCII value ke according)
 */
void changeValue() {
    char c = 'A';

    printf("Original value: %c\n", c);

    // ASCII value +1 kar rahe hain
    c++;

    printf("Updated value: %c\n", c);
}

/**
 * Function: swapWithTemp
 * Purpose : Swapping 2 variables using temporary variable (most standard way)
 */
void swapWithTemp() {
    int a = 5, b = 10;

    printf("Before swap → a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("After swap  → a = %d, b = %d\n", a, b);
}

/**
 * Function: swap
 * Purpose : Swapping 2 variables using addition-subtraction trick (no temp)
 */
void swap() {
    int a = 5, b = 10;

    printf("Before swap → a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap  → a = %d, b = %d\n", a, b);
}

/**
 * Function: swapHard
 * Purpose : Swapping using XOR bitwise operation (memory efficient)
 * Note    : Works only for integer types
 */
void swapHard() {
    int a = 5, b = 10;

    printf("Before swap → a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swap  → a = %d, b = %d\n", a, b);
}

/**
 * Function: swapWithout
 * Purpose : Swapping using multiplication & division (no temp)
 * Warning : Division by zero ka risk hota hai agar koi variable 0 ho
 */
void swapWithout() {
    int a = 5, b = 10;

    printf("Before swap → a = %d, b = %d\n", a, b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("After swap  → a = %d, b = %d\n", a, b);
}

/**
 * Function: swapSingleLine
 * Purpose : One-line swap using arithmetic assignment expression
 * Logic   : b = a + b - (a = b)
 */
void swapSingleLine() {
    int a = 5, b = 10;

    printf("Before swap → a = %d, b = %d\n", a, b);

    b = a + b - (a = b);  // 1-liner swap logic

    printf("After swap  → a = %d, b = %d\n", a, b);
}

// ================================
//             MAIN
// ================================
int main() {
    // sizeOfChar();         // Check size of char
    // sizeOfReal();         // Check size of float
    // changeValue();        // Increment char value

    // swap();               // Swap using + -
    // swapWithTemp();       // Swap using temp variable
    // swapHard();           // Swap using XOR
    // swapWithout();        // Swap using * /
    swapSingleLine();        // Swap using one-line expression

    return 0;
}
