#include <stdio.h>

/**
 * Function: calculateSum
 * Purpose : Calculate the sum of the first N natural numbers
 * Formula : sum = 1 + 2 + 3 + ... + n
 * Real-world Use: Finance totals, counting inventory, etc.
 * @param n: Number of terms
 * @return : Sum of first N natural numbers
 */
int calculateSum(int n) {
    int i = 1, sum = 0;
    while (i <= n) {
        sum += i;
        i++;
    }
    return sum;
}

/**
 * Function: calculateSumEven
 * Purpose : Calculate the sum of the first N even numbers
 * Formula : 2 + 4 + 6 + ... (N terms)
 * @param n: Number of terms
 * @return : Sum of first N even natural numbers
 */
int calculateSumEven(int n) {
    int i = 1, sum = 0;
    while (i <= n) {
        sum += i * 2;
        i++;
    }
    return sum;
}

/**
 * Function: calculateSumOdd
 * Purpose : Calculate the sum of the first N odd numbers
 * Formula : 1 + 3 + 5 + ... (N terms)
 * @param n: Number of terms
 * @return : Sum of first N odd natural numbers
 */
int calculateSumOdd(int n) {
    int i = 1, sum = 0;
    while (i <= n) {
        sum += (i * 2) - 1;
        i++;
    }
    return sum;
}

/**
 * Function: calculateSumSqr
 * Purpose : Calculate the sum of squares of first N natural numbers
 * Formula : 1² + 2² + 3² + ... + n²
 * @param n: Number of terms
 * @return : Sum of squares
 */
int calculateSumSqr(int n) {
    int i = 1, sum = 0;
    while (i <= n) {
        sum += i * i;
        i++;
    }
    return sum;
}

/**
 * Function: calculateSumCubes
 * Purpose : Calculate the sum of cubes of first N natural numbers
 * Formula : 1³ + 2³ + 3³ + ... + n³
 * @param n: Number of terms
 * @return : Sum of cubes
 */
int calculateSumCubes(int n) {
    int i = 1, sum = 0;
    while (i <= n) {
        sum += i * i * i;
        i++;
    }
    return sum;
}

/**
 * Function: takePositiveInput
 * Purpose : Ensure the user inputs a positive integer
 * Use-case: Common input validation
 * @param message: Prompt to show the user
 * @return : Validated positive integer
 */
int takePositiveInput(const char* message) {
    int num;
    do {
        printf("%s", message);
        scanf("%d", &num);

        if (num <= 0) {
            printf("Please enter a number greater than 0.\n");
        }
    } while (num <= 0);

    return num;
}

int main() {
    int n;

    // 1. Sum of N natural numbers
    n = takePositiveInput("Enter N to calculate sum of first N natural numbers:\n");
    printf("Sum = %d\n\n", calculateSum(n));

    // 2. Sum of N even numbers
    n = takePositiveInput("Enter N to calculate sum of first N even numbers:\n");
    printf("Sum = %d\n\n", calculateSumEven(n));

    // 3. Sum of N odd numbers
    n = takePositiveInput("Enter N to calculate sum of first N odd numbers:\n");
    printf("Sum = %d\n\n", calculateSumOdd(n));

    // 4. Sum of squares of N numbers
    n = takePositiveInput("Enter N to calculate sum of squares of first N numbers:\n");
    printf("Sum = %d\n\n", calculateSumSqr(n));

    // 5. Sum of cubes of N numbers
    n = takePositiveInput("Enter N to calculate sum of cubes of first N numbers:\n");
    printf("Sum = %d\n", calculateSumCubes(n));

    return 0;
}
