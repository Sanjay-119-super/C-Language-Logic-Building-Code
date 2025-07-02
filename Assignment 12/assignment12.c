#include <stdio.h>

/**
 * Function: print1
 * Purpose : User se ek number n lena aur uske liye "MySirG" print karna
 * Example : Input → 3  → Output → MySirG MySirG MySirG
 */
void print1() {
    int n;
    printf("Enter how many times to print 'MySirG': ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("MySirG\n");
        i++;
    }
}

/**
 * Function: print2
 * Purpose : 1 to n tak ke numbers print karna
 */
void print2() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }
}

/**
 * Function: print3
 * Purpose : 10 to n tak reverse counting print karna
 */
void print3() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 10;
    while (i >= n) {
        printf("%d\n", i);
        i--;
    }
}

/**
 * Function: print4
 * Purpose : First n odd numbers print karna (1, 3, 5...)
 */
void print4() {
    int n;
    printf("Enter how many odd numbers to print: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("%d\n", (i * 2) - 1);
        i++;
    }
}

/**
 * Function: print5
 * Purpose : n odd numbers ko reverse order mein print karna (19, 17, ..., 1)
 */
void print5() {
    int n;
    printf("Enter how many odd numbers to print in reverse: ");
    scanf("%d", &n);

    int i = n;
    while (i >= 1) {
        printf("%d\n", (i * 2) - 1);
        i--;
    }
}

/**
 * Function: print6
 * Purpose : First n even numbers print karna (2, 4, 6...)
 */
void print6() {
    int n;
    printf("Enter how many even numbers to print: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("%d\n", i * 2);
        i++;
    }
}

/**
 * Function: print7
 * Purpose : First n even numbers in reverse order (20, 18, ..., 2)
 */
void print7() {
    int n;
    printf("Enter how many even numbers to print in reverse: ");
    scanf("%d", &n);

    int i = n;
    while (i >= 1) {
        printf("%d\n", i * 2);
        i--;
    }
}

/**
 * Function: print8
 * Purpose : First n squares print karna (1², 2², 3²...)
 */
void print8() {
    int n;
    printf("Enter how many squares to print: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("%d\n", i * i);
        i++;
    }
}

/**
 * Function: print9
 * Purpose : First n cubes print karna (1³, 2³, 3³...)
 */
void print9() {
    int n;
    printf("Enter how many cubes to print: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        printf("%d\n", i * i * i);
        i++;
    }
}

/**
 * Function: print10
 * Purpose : Table of any number n (1×n, 2×n... 10×n)
 */
void print10() {
    int n;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, i * n);
        i++;
    }
}

int main() {
    // Uncomment the function you want to test

    // print1();   // Print "MySirG" n times
    // print2();   // 1 to n
    // print3();   // 10 to n (reverse)
    // print4();   // First n odd numbers
    // print5();   // First n odd numbers in reverse
    // print6();   // First n even numbers
    // print7();   // First n even numbers in reverse
    // print8();   // Squares of first n numbers
    // print9();   // Cubes of first n numbers
    // print10();  // Table of any number n

    return 0;
}
