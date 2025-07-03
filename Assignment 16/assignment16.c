#include <stdio.h>

/**
 * FUNCTION: nthTermFibo
 *
 * PURPOSE:
 *   Calculate and print the Nth term in the Fibonacci sequence.
 *
 * WHY:
 *   Fibonacci sequence is foundational in recursive logic, simulations,
 *   and mathematical analysis.
 *
 * LOGIC:
 *   Use iterative approach: Start with first two terms (0, 1),
 *   then compute next by summing previous two.
 *
 * USE CASE:
 *   - Coding tests
 *   - Predictive modeling
 *   - Fibonacci-based sequence generation
 *
 * FIRST THOUGHT PRINCIPLE:
 *   Har agla number do pehle numbers ka sum hota hai.
 *   Is base logic se loop mein aage badhna hai.
 */
void nthTermFibo()
{
    int Nth = 5;
    int f = 0, s = 1, next;

    if (Nth == 1) {
        printf("0");
        return;
    }

    if (Nth == 2) {
        printf("1");
        return;
    }

    for (int i = 3; i <= Nth; i++) {
        next = f + s;
        f = s;
        s = next;
    }

    printf("%d ", next);
}


/**
 * FUNCTION: printFirstNTermFibo
 *
 * PURPOSE:
 *   Print first N terms of the Fibonacci sequence.
 *
 * WHY:
 *   Helpful for pattern generation and understanding series structure.
 *
 * LOGIC:
 *   Begin with 0 and 1, then iteratively print next terms by summing previous two.
 *
 * USE CASE:
 *   - Teaching
 *   - Simulation
 *   - Visualizing growth patterns
 *
 * FIRST THOUGHT PRINCIPLE:
 *   Series mein har term pehle do ka sum hota hai — isi simple idea pe loop banate hain.
 */
void printFirstNTermFibo()
{
    int n = 10;
    int f = 0, s = 1, next;

    printf("%d %d ", f, s);

    for (int i = 3; i <= n; i++) {
        next = f + s;
        printf("%d ", next);
        f = s;
        s = next;
    }
}


/**
 * FUNCTION: isNumberFiboSeries
 *
 * PURPOSE:
 *   Check if a given number is part of the Fibonacci sequence.
 *
 * WHY:
 *   Used for pattern validation and logical constraints in problems.
 *
 * LOGIC:
 *   Start generating Fibonacci numbers until number is matched or crossed.
 *   If matched → part of series, else not.
 *
 * USE CASE:
 *   - Puzzle solving
 *   - Game rules
 *   - Sequence checking
 *
 * FIRST THOUGHT PRINCIPLE:
 *   Series generate karo jab tak number tak na pahunch jaaye.
 *   Agar match ho gaya toh part of Fibonacci.
 */
void isNumberFiboSeries()
{
    int n = 22;
    int f = 0, s = 1, next = 0;

    if (n == 0 || n == 1) {
        printf("part of fibo");
        return;
    }

    while (next < n) {
        next = f + s;
        f = s;
        s = next;
    }

    if (next == n) {
        printf("part of fibo");
    } else {
        printf("not part of fibo");
    }
}


/**
 * FUNCTION: armStrong
 *
 * PURPOSE:
 *   Check if a given number is an Armstrong number.
 *
 * WHY:
 *   Armstrong numbers are useful for mathematical curiosity,
 *   puzzles, and number-based filtering.
 *
 * LOGIC:
 *   Sum of cube of each digit should be equal to original number.
 *
 * USE CASE:
 *   - Number filtering
 *   - Puzzle engines
 *   - Learning digit-based operations
 *
 * FIRST THOUGHT PRINCIPLE:
 *   Number ko todh ke har digit ka cube le lo.
 *   Sabka sum agar number ke barabar ho → Armstrong number.
 */
void armStrong()
{
    int n = 153;
    int sum = 0;
    int temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp = temp / 10;
    }

    if (sum == n) {
        printf("Armstrong number");
    } else {
        printf("not armstrong number");
    }
}


/**
 * FUNCTION: printAllArmstrongNumber
 *
 * PURPOSE:
 *   Print all Armstrong numbers between 1 and 1000.
 *
 * WHY:
 *   Helpful for identifying special numbers used in digit-based puzzles.
 *
 * LOGIC:
 *   For each number: break into digits, cube each, sum them,
 *   and compare with original number.
 *
 * USE CASE:
 *   - Logical filtering
 *   - Teaching concept of digit operations
 *   - Pattern exploration
 *
 * FIRST THOUGHT PRINCIPLE:
 *   Har number ke digits ka cube lo aur total ko original se compare karo.
 *   Agar match ho → Armstrong number.
 */
void printAllArmstrongNumber()
{
    int limit = 1000;

    for (int i = 0; i <= limit; i++) {
        int sum = 0;
        int temp = i;

        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp = temp / 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }
}


/**
 * FUNCTION: main
 *
 * PURPOSE:
 *   Entry point of the program; used for function testing and demo.
 *
 * WHY:
 *   Every C program begins execution from main().
 *
 * NOTE:
 *   Uncomment the function you want to test individually.
 */
int main()
{
    // nthTermFibo();
    // printFirstNTermFibo();
    // isNumberFiboSeries();
    // armStrong();
    printAllArmstrongNumber();

    return 0;
}
