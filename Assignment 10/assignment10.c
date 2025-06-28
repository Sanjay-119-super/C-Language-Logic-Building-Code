#include <stdio.h>

/**
 * Function: checkNumber
 * Purpose : Kisi bhi number ko check karna ki wo positive, negative ya zero hai.
 * Logic   : if-else structure use kiya gaya hai.
 * Why Use : Financial, sensor, or any value-based check system mein use hota hai.
 */
void checkNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("Number is positive\n");
    else if (num < 0)
        printf("Number is negative\n");
    else
        printf("Number is zero\n");
}

/**
 * Function: checkCharacter
 * Purpose : Kisi character ko check karna ki wo uppercase alphabet, lowercase alphabet, digit ya special character hai.
 * Logic   : ASCII value ke basis pe check kiya gaya hai.
 * Why Use : Input validation, password check, and login form jaise systems mein kaam aata hai.
 */
void checkCharacter() {
    char c;
    printf("Enter a character: ");
    getchar(); // buffer flush for character input
    scanf("%c", &c);

    if (c >= 65 && c <= 90)
        printf("Character is alphabet (UPPER-CASE)\n");
    else if (c >= 97 && c <= 122)
        printf("Character is alphabet (lower-case)\n");
    else if (c >= 48 && c <= 57)
        printf("Character is a digit\n");
    else
        printf("Character is a special character\n");
}

/**
 * Function: checkValidTriangle
 * Purpose : Teen sides ki value se check karna ki triangle valid hai ya nahi.
 * Logic   : Triangle tabhi valid hota hai agar (a+b > c) && (b+c > a) && (c+a > b)
 * Why Use : Geometry-based apps, CAD, or construction calculators mein kaam aata hai.
 */
void checkValidTriangle() {
    int a, b, c;
    printf("Enter the 3 sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (c + a > b))
        printf("Given sides can form a valid triangle.\n");
    else
        printf("Given sides cannot form a valid triangle.\n");
}

/**
 * Function: checkMonthDays
 * Purpose : Month number se us month ke days print karna.
 * Logic   : 1 to 12 ke month ke according conditions check kari gayi hain.
 * Why Use : Calendar-based systems, project planners, scheduling etc.
 */
void checkMonthDays() {
    int month;
    printf("Enter month number (1 for January, ..., 12 for December): ");
    scanf("%d", &month);

    if (month == 1) printf("Month: January | Days: 31\n");
    else if (month == 2) printf("Month: February | Days: 28 or 29 (Leap Year)\n");
    else if (month == 3) printf("Month: March | Days: 31\n");
    else if (month == 4) printf("Month: April | Days: 30\n");
    else if (month == 5) printf("Month: May | Days: 31\n");
    else if (month == 6) printf("Month: June | Days: 30\n");
    else if (month == 7) printf("Month: July | Days: 31\n");
    else if (month == 8) printf("Month: August | Days: 31\n");
    else if (month == 9) printf("Month: September | Days: 30\n");
    else if (month == 10) printf("Month: October | Days: 31\n");
    else if (month == 11) printf("Month: November | Days: 30\n");
    else if (month == 12) printf("Month: December | Days: 31\n");
    else printf("Invalid month number. Please enter between 1 and 12.\n");
}

// ==============================
// 🔹 Main Driver Function 🔹
// ==============================
int main() {
    checkNumber();
    checkCharacter();
    checkValidTriangle();
    checkMonthDays();
    return 0;
}
