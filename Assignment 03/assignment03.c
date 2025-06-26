#include <stdio.h>

/**
 * Function: printASCII1
 * Purpose : Character input le kar uska ASCII value print karta hai
 */
void printASCII1() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);  // Note: space before %c to ignore leftover newline

    printf("Character '%c' ka ASCII value = %d\n", c, c);
}

/**
 * Function: printASCII2
 * Purpose : ASCII value input le kar corresponding character print karta hai
 */
void printASCII2() {
    int asciiValue;

    printf("Enter an ASCII value (0-255): ");
    scanf("%d", &asciiValue);

    // Validation
    if (asciiValue < 0 || asciiValue > 255) {
        printf("Error: ASCII value must be between 0 and 255\n");
        return;
    }

    printf("ASCII value %d ka character = '%c'\n", asciiValue, asciiValue);
}

/**
 * Function: printASCII3
 * Purpose : 3 character input leta hai aur unke ASCII values print karta hai
 */
void printASCII3() {
    char c1, c2, c3;
    printf("Enter three characters (separated by space): ");
    scanf(" %c %c %c", &c1, &c2, &c3);

    printf("Characters: '%c', '%c', '%c'\n", c1, c2, c3);
    printf("ASCII values: %d %d %d\n", c1, c2, c3);
}

/**
 * Function: printLastDigit
 * Purpose : Ek fixed number (123) ka last digit print karta hai
 */
void printLastDigit() {
    int num = 123;
    int lastDigit = num % 10;

    printf("Number: %d, Last digit = %d\n", num, lastDigit);
}

/**
 * Function: printWithoutLastDigit
 * Purpose : Ek fixed number (123) ka last digit hata kar remaining number print karta hai
 */
void printWithoutLastDigit() {
    int num = 123;
    int result = num / 10;

    printf("Number: %d, Without last digit = %d\n", num, result);
}

// ===============================
//             Main
// ===============================
int main() 
{
    printASCII1();
    printASCII2();
    printASCII3();
    printLastDigit();
    printWithoutLastDigit();

    return 0;
}
