/*********************************************************
 * Program: Modular Input-Output Practice in C MySirG
 * Author : Sanjay Kumar
 * Date   : 16-06-2025
 * Purpose: Practice I/O and function modularization
 *********************************************************/

#include <stdio.h>

// ------------------------------------
// Function: printHello
// Simple message "Hello" print karta hai
// ------------------------------------
void printHello() {
    printf("Hello\n");
}

// ------------------------------------
// Function: printHelloStudent
// "Hello" aur "Student" ko alag lines mein print karta hai
// ------------------------------------
void printHelloStudent() {
    printf("Hello\nStudent\n");
}

// ------------------------------------
// Function: printMySirG
// Double quotes ke andar "MySirG" print karta hai
// ------------------------------------
void printMySirG() {
    printf("\"MySirG\"\n");
}

// ------------------------------------
// Function: printDoubleQuote
// Ek string jisme escape sequence "\n" hai, usko print karta hai
// ------------------------------------
void printDoubleQuote() {
    printf("\"\\n\"\n"); // Output: "\n"
}

// ------------------------------------
// Function: printWeirdQuote
// "\"r" jaise thoda tricky string print karta hai
// ------------------------------------
void printWeirdQuote() {
    printf("\"\\\"r\"\n"); // Output: "\"r"
}

// ------------------------------------
// Function: printTeachersDay
// "Teacher's Day" ko double quotes ke andar print karta hai
// ------------------------------------
void printTeachersDay() {
    printf("\"Teacher's Day\"\n");
}

// ------------------------------------
// Function: sumOfTwoNumbers
// Do integer number user se leta hai aur unka sum return karta hai
// @return => dono number ka sum
// ------------------------------------
int sumOfTwoNumbers() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

// ------------------------------------
// Function: square
// Do double numbers ka multiplication karta hai
// @param num1 => pehla number
// @param num2 => doosra number
// @return => num1 * num2
// ------------------------------------
double square(double num1, double num2) {
    return num1 * num2;
}

// ------------------------------------
// Function: areaOfRectangle
// Rectangle ka area nikalta hai (length * width)
// @param l => length
// @param w => width
// @return => area of rectangle
// ------------------------------------
int areaOfRectangle(int l, int w) {
    return l * w;
}

// ------------------------------------
// Function: areaOfCircle
// Circle ka area calculate karta hai (πr²)
// @param radius => circle ka radius
// @return => area of circle
// ------------------------------------
double areaOfCircle(double radius) {
    return 3.14 * radius * radius;
}

// ------------------------------------
// Main Function
// Sabhi upar likhe functions ko test karta hai
// ------------------------------------
int main() {
     printHello();
     printHelloStudent();
     printMySirG();
     printDoubleQuote();
     printWeirdQuote();
     printTeachersDay();

    int sum = sumOfTwoNumbers();
    printf("Sum is: %d\n", sum);

    double sq = square(2.2, 5.0);
    printf("Square of two numbers: %.2lf\n", sq);

    int area = areaOfRectangle(10, 20);
    printf("Area of rectangle: %d\n", area);

    double circleArea = areaOfCircle(2.2);
    printf("Area of circle: %.2lf\n", circleArea);

    return 0;
}
