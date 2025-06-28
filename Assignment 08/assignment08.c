#include <stdio.h>
#include <stdbool.h>

/**
 * Function: checkDigit
 * Purpose : Check karta hai ki diya gaya number 3-digit ka hai ya nahi
 * Logic   : Agar number 100 se bada ya barabar ho aur 999 se chhota ya barabar ho,
 *           tabhi wo number 3-digit ka hota hai (100 se 999 tak).
 * Return  : true (agar 3-digit ka hai), false (nahi hai)
 */
bool checkDigit() {
    int num;
    printf("Enter a 3-digit number: \n");
    scanf("%d", &num);

    if (num >= 100 && num <= 999)
        return true;
    else
        return false;
}

/**
 * Function: printGreater
 * Purpose : 2 numbers ke beech ka greater ya equal number batata hai
 * Logic   :
 *   - Agar num1 > num2 → num1 bada hai
 *   - Agar num1 == num2 → Dono same hai
 *   - Else → num2 bada hai
 */
void printGreater() {
    int num1, num2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        printf("num1 is greater -> %d\n", num1);
    else if (num1 == num2)
        printf("Both numbers are same -> %d and %d\n", num1, num2);
    else
        printf("num2 is greater -> %d\n", num2);
}

/**
 * Function: quadatricEquation
 * Purpose : a, b, c constants ke basis pe quadratic equation ke roots ka type batata hai
 * Logic   :
 *   - Discriminant D = b² - 4ac
 *   - D > 0 → 2 real & distinct roots
 *   - D == 0 → 2 real & equal roots
 *   - D < 0 → Complex (imaginary) roots
 */
void quadatricEquation() {
    int a, b, c;
    printf("Enter a, b, c constants: \n");
    scanf("%d %d %d", &a, &b, &c);

    int D = b * b - (4 * a * c);  // Discriminant

    if (D > 0)
        printf("Two distinct real roots\n");
    else if (D == 0)
        printf("Two equal real roots\n");
    else
        printf("Complex (imaginary) roots\n");
}

/**
 * Function: checkLeapYear
 * Purpose : Year ke basis pe check karta hai ki wo leap year hai ya nahi
 * Logic   :
 *   - 400 se divisible ho → Leap year
 *   - 100 se divisible ho → Not leap year
 *   - 4 se divisible ho → Leap year
 *   - Warna → Not a leap year
 */
void checkLeapYear() {
    int year;
    printf("Enter any year for leap year checking: \n");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("%d is a Leap Year\n", year);
    else if (year % 100 == 0)
        printf("%d is NOT a Leap Year\n", year);
    else if (year % 4 == 0)
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is NOT a Leap Year\n", year);
}

/**
 * Function: findGreates
 * Purpose : 3 numbers me se sabse bada number dhoondhna
 * Logic   :
 *   - Compare karo a, b, c ek ek karke
 *   - Jo bhi sabse bada hoga usi ko print karo
 */
void findGreates() {
    int a, b, c;
    printf("Enter 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%d -> a is greatest\n", a);
    else if (b >= a && b >= c)
        printf("%d -> b is greatest\n", b);
    else
        printf("%d -> c is greatest\n", c);
}

/**
 * 🔹 Main Driver Function
 * Purpose: Sabhi functions ko test/run karta hai
 */
int main() {
    bool res = checkDigit();
    printf("Is 3-digit number? -> %d\n", res);  // 1 means true

    printGreater();         // Compare 2 numbers
    quadatricEquation();    // Roots of quadratic equation
    checkLeapYear();        // Leap year checker
    findGreates();          // 3-number maximum finder

    return 0;
}
