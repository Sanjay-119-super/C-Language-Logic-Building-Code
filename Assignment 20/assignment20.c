#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
    Function: menu1()
    Use: LCM (Least Common Multiple) nikalna using for loop
    Real Life Example: Jab do cheezon ka ek common timing nikalna ho jaise calendar repeat hona
    Logic: Dono number se divide hone wali pehli value LCM hoti hai
    C Concepts: for loop, break, % operator
*/
void menu1() {
    int n1, n2, max, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    max = (n1 > n2) ? n1 : n2;

    for (int i = max; ; i++) {
        if (i % n1 == 0 && i % n2 == 0) {
            lcm = i;
            break;
        }
    }

    printf("LCM (using for loop): %d\n", lcm);
}

/*
    Function: lcm()
    Use: Same LCM logic using while loop instead of for loop
    Real Life: Alarm timings, meeting schedules, reminders
    Logic: Jab tak LCM nahi milta, max ko barhate raho
    C Concepts: while loop, infinite loop, condition
*/
void lcm() {
    int a, b, max, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM (using while loop): %d\n", lcm);
}

/*
    Function: sumOfDigits()
    Use: Kisi bhi number ke digits ka sum nikalna
    Real Life: Mobile number, account number ka checksum banana
    Logic: Har digit ko alag nikal kar sum me add karte jao
    C Concepts: while loop, % and / operator
*/
void sumOfDigits() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);
}

/*
    Function: volumeOfCubiod()
    Use: Cuboid ka volume nikalna
    Real Life: 3D box, container, building volume calculation
    Formula: Volume = length * breadth * height
    C Concepts: Simple arithmetic, scanf/printf
*/
void volumeOfCubiod() {
    int l, b, h;
    printf("Enter length, breadth, height: ");
    scanf("%d %d %d", &l, &b, &h);

    int volume = l * b * h;
    printf("Volume of Cuboid: %d\n", volume);
}

/*
    Function: checkPrime()
    Use: Number prime hai ya nahi yeh check karna
    Real Life: Encryption algorithms, coding exams
    Logic: 2 se lekar num-1 tak check karo, agar kisi se divide hua to prime nahi
    C Concepts: for loop, flag variable, condition check
*/
void checkPrime() {
    int num, isPrime = 1;
    printf("Enter a number to check prime: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not Prime\n");
        return;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
}

/*
    Function: gradeFind()
    Use: Marks ke base par grade dena
    Real Life: College result system, report card
    Logic: Marks ke range ke hisaab se grade assign karna
    C Concepts: if-else, switch-case
*/
void gradeFind() {
    float marks;
    int gradeCode;

    while (1) {
        printf("\nEnter marks (0 - 100): ");
        scanf("%f", &marks);

        if (marks < 0 || marks > 100)
            gradeCode = -1;
        else if (marks >= 90)
            gradeCode = 1;
        else if (marks >= 80)
            gradeCode = 2;
        else if (marks >= 70)
            gradeCode = 3;
        else if (marks >= 60)
            gradeCode = 4;
        else
            gradeCode = 5;

        switch (gradeCode) {
            case 1: printf("Grade - A\n"); break;
            case 2: printf("Grade - B\n"); break;
            case 3: printf("Grade - C\n"); break;
            case 4: printf("Grade - D\n"); break;
            case 5: printf("Grade - F\n"); break;
            default: printf("INVALID MARKS\n"); break;
        }
    }
}

/*
    Function: basicMenuOperations()
    Use: Factorial, even/odd, area of circle, sum of numbers — all in one menu
    Real Life: Calculator apps, basic utilities
    Logic: User se choice lekar uske according operation perform karna
    C Concepts: switch-case, loop, arithmetic
*/
void basicMenuOperations() {
    int num, number;
    printf("\nBasic Operations Menu\n");
    printf("1 -> Calculate Factorial\n");
    printf("2 -> Check Odd/Even\n");
    printf("3 -> Area of Circle\n");
    printf("4 -> Sum of First N Natural Numbers\n");
    printf("5 -> Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &num);

    switch (num) {
        case 1: {
            printf("Enter number: ");
            scanf("%d", &number);
            int fact = 1;
            for (int i = 1; i <= number; i++)
                fact *= i;
            printf("Factorial of %d is: %d\n", number, fact);
            break;
        }
        case 2: {
            printf("Enter number: ");
            scanf("%d", &number);
            if (number % 2 == 0)
                printf("Even Number\n");
            else
                printf("Odd Number\n");
            break;
        }
        case 3: {
            float r, area;
            printf("Enter radius: ");
            scanf("%f", &r);
            area = 3.14 * r * r;
            printf("Area of Circle: %.2f\n", area);
            break;
        }
        case 4: {
            printf("Enter N: ");
            scanf("%d", &number);
            int sum = 0;
            for (int i = 1; i <= number; i++)
                sum += i;
            printf("Sum of first %d natural numbers: %d\n", number, sum);
            break;
        }
        case 5:
            exit(0);
        default:
            printf("Invalid choice!\n");
    }
}

/*
    Function: checkAlphabet()
    Use: Kisi character ka type check karna — uppercase, lowercase ya special
    Real Life: Password validation, form validation
    Logic: Char functions se pata lagate hain type of character
    C Concepts: char, isalpha, isdigit, isupper, islower
*/
void checkAlphabet() {
    char alpha;
    int num;

    printf("\nAlphabet Checker Menu:\n");
    printf("1 -> Check UPPERCASE\n");
    printf("2 -> Check lowercase\n");
    printf("3 -> Check Special Character\n");

    printf("Enter your choice: ");
    scanf("%d", &num);
    while (getchar() != '\n'); // input buffer clear karna

    printf("Enter any character: ");
    scanf("%c", &alpha);

    switch (num) {
        case 1:
            if (isupper(alpha))
                printf("It's an UPPERCASE alphabet\n");
            else
                printf("Not UPPERCASE\n");
            break;
        case 2:
            if (islower(alpha))
                printf("It's a lowercase alphabet\n");
            else
                printf("Not lowercase\n");
            break;
        case 3:
            if (!isalpha(alpha) && !isdigit(alpha))
                printf("Special character\n");
            else
                printf("Not a special character\n");
            break;
        default:
            printf("Invalid choice\n");
    }
}

/*
    Main Function
    Use: Sabhi functions ko ek menu ke through accessible banana
    Logic: Infinite loop ke andar user se input lena aur switch-case se function call karna
    C Concepts: while loop, switch-case, user input, menu-based logic
*/
int main() {
    int choice;

    while (1) {
        printf("\n========= MAIN MENU =========\n");
        printf("1. LCM using for loop\n");
        printf("2. LCM using while loop\n");
        printf("3. Sum of Digits\n");
        printf("4. Volume of Cuboid\n");
        printf("5. Check Prime\n");
        printf("6. Grade System\n");
        printf("7. Basic Operations (Factorial, Odd/Even, Area, Sum)\n");
        printf("8. Alphabet Checker\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: menu1(); break;
            case 2: lcm(); break;
            case 3: sumOfDigits(); break;
            case 4: volumeOfCubiod(); break;
            case 5: checkPrime(); break;
            case 6: gradeFind(); break;
            case 7: basicMenuOperations(); break;
            case 8: checkAlphabet(); break;
            case 9:
                printf("Exiting... Thank you!\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
