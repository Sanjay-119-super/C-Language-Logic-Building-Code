#include <stdio.h>
#include <stdbool.h>

/**
 * Function: check_positive_non_positive
 * Purpose : Kisi bhi number ko check karta hai ki wo positive, negative ya zero hai
 * Param   : None (input user se liya jaata hai)
 * Return  : void
 */
void check_positive_non_positive() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("Positive\n");
    else if (num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
}

/**
 * Function: is_divisible_by_5
 * Purpose : Check karta hai ki number 5 se divisible hai ya nahi
 * Param   : None (input user se liya jaata hai)
 * Return  : void
 */
void is_divisible_by_5() {
    int num;
    printf("Enter a number to check divisibility by 5: ");
    scanf("%d", &num);

    if (num % 5 == 0)
        printf("Divisible by 5\n");
    else
        printf("Not divisible by 5\n");
}

/**
 * Function: is_even_odd
 * Purpose : Check karta hai ki number even hai ya odd
 * Param   : None (input user se liya jaata hai)
 * Return  : true (even), false (odd)
 */
bool is_even_odd() {
    int num;
    printf("Enter a number to check even/odd: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        return true;
    else
        return false;
}

/**
 * Function: check_even_odd_1
 * Purpose : Galat tarike se even/odd check karna (sirf learning ke liye)
 * Param   : None
 * Return  : void
 */
void check_even_odd_1() {
    int n = 11;
    if ((n / 2) * n == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

/**
 * Function: check_even_odd_2
 * Purpose : Bitwise AND operator ke through fast even/odd check karna
 * Param   : None (internal number use hota hai)
 * Return  : void
 */
void check_even_odd_2() {
    int n = 12;

    if (n & 1)
        printf("%d is Odd (Bitwise Method)\n", n);
    else
        printf("%d is Even (Bitwise Method)\n", n);
}

/**
 * Function: main
 * Purpose : Program ka starting point; saare function calls yahaan se hote hain
 * Return  : int (0 means successful execution)
 */
int main() {
    check_positive_non_positive();

    is_divisible_by_5();

    bool res = is_even_odd();
    if (res)
        printf("Even (from is_even_odd function)\n");
    else
        printf("Odd (from is_even_odd function)\n");

    check_even_odd_1();  // Incorrect logic (for learning only)

    check_even_odd_2();  // Correct & fast logic using bitwise

    return 0;
}
