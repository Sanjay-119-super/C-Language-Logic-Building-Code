#include <stdio.h>

/**
 * Function: sumOfDigits
 * Purpose : 3-digit number ke har digit ka sum nikalna
 * Logic   : 123 → 1 + 2 + 3 = 6
 * @return : digits ka sum (int)
 */
int sumOfDigits() {
    int num = 123;

    int n1 = num % 10;         // last digit = 3
    int newNum1 = num / 10;    // 123 → 12

    int n2 = newNum1 % 10;     // middle digit = 2
    int newNum2 = newNum1 / 10;// first digit = 1

    int sum =  n1 + n2 + newNum2;

    return sum;
}

/**
 * Function: aSCIICode
 * Purpose : kisi bhi character ka ASCII code print karna
 * Example : '+' ka ASCII code = 43
 */
void aSCIICode() {
    char c = '+';
    printf("ASCII Code: %d\n", c);
    return;
}

/**
 * Function: printSize
 * Purpose : alag-alag data types ka size (in bytes) print karna
 * Data    : char, int, float, double
 */
void printSize() {
    char c = 'A';
    int a = 100;
    float f = 5.4f;
    double d = 10.22;

    printf("Size of char   : %zu bytes\n", sizeof(c));
    printf("Size of int    : %zu bytes\n", sizeof(a));
    printf("Size of float  : %zu bytes\n", sizeof(f));
    printf("Size of double : %zu bytes\n", sizeof(d));
}

/**
 * Function: lastDigitZero
 * Purpose : kisi bhi number ka last digit zero karna
 * Logic   : 2345 → 2340
 */
void lastDigitZero() {
    int num = 2345;
    int res = (num / 10) * 10; // last digit hata ke 0 lagaya
    printf("Number after making last digit zero: %d\n", res);
    return;
}

/**
 * Function: input
 * Purpose : ek number aur ek digit ko print karna (jaise input form mein)
 */
void input() {
    int number = 234;
    int digit = 9;
    printf("Number | Digit: %d%d\n", number, digit);
    return;
}

/**
 * 🔹 Main Function
 * Purpose: Functions ko test/run karna
 */
int main() {
    // int sum = sumOfDigits();
    // printf("Sum of digits: %d\n", sum);

    // aSCIICode();

    // printSize();

    // lastDigitZero();

    input();

    return 0;
}
