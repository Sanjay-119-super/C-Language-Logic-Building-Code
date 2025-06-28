#include <stdio.h>
#include <stdbool.h>

/**
 * Function: calculateProfitLoss
 * Purpose : Kisi product ke cost price (cp) aur selling price (sp) ke basis par
 *           profit ya loss percentage calculate karna.
 * 
 * Logic   : 
 *   - Agar SP > CP → profit = SP - CP
 *   - Agar CP > SP → loss = CP - SP
 *   - Agar SP == CP → no profit, no loss
 * 
 * Why Use: E-commerce, billing, inventory system mein pricing analysis ke liye
 * 
 * Params : None (user se input liya jaata hai)
 * Return  : void
 */
void calculateProfitLoss() {
    int cp, sp;
    printf("Enter the Cost Price (CP): ");
    scanf("%d", &cp);
    printf("Enter the Selling Price (SP): ");
    scanf("%d", &sp);

    if (sp > cp) {
        int profit = sp - cp;
        float profitPercentage = ((float)profit / cp) * 100;
        printf("Profit Percentage: %.2f%%\n", profitPercentage);
    } else if (cp > sp) {
        int loss = cp - sp;
        float lossPercentage = ((float)loss / cp) * 100;
        printf("Loss Percentage: %.2f%%\n", lossPercentage);
    } else {
        printf("No Profit No Loss\n");
    }
}

/**
 * Function: passFail
 * Purpose : 5 subjects ke marks check karke student pass hai ya fail, wo batana.
 * 
 * Logic   : 
 *   - Har subject ke marks ≥ 33 hone chahiye to pass.
 *   - Agar kisi bhi subject ka marks < 33, to fail.
 *   - Marks ka valid range 0–100 hona chahiye.
 * 
 * Why Use: Academic grading system, result generation me use hota hai.
 * 
 * Params : None (marks user input karta hai)
 * Return  : void
 */
void passFail() {
    int passMark = 33;
    int math, hindi, english, java, ss;

    printf("Enter marks for Math (0–100): ");
    scanf("%d", &math);
    printf("Enter marks for Hindi (0–100): ");
    scanf("%d", &hindi);
    printf("Enter marks for English (0–100): ");
    scanf("%d", &english);
    printf("Enter marks for Java (0–100): ");
    scanf("%d", &java);
    printf("Enter marks for Social Science (0–100): ");
    scanf("%d", &ss);

    // Validation: Marks must be in range 0–100
    if (math > 100 || hindi > 100 || english > 100 || java > 100 || ss > 100 ||
        math < 0 || hindi < 0 || english < 0 || java < 0 || ss < 0) {
        printf("Invalid input: Marks must be between 0 and 100 only.\n");
        return;
    }

    if (math >= passMark && hindi >= passMark && english >= passMark &&
        java >= passMark && ss >= passMark) {
        printf("Result: Candidate has passed the exam.\n");
    } else {
        printf("Result: Candidate has failed the exam.\n");
    }
}

/**
 * Function: checkAlphabet
 * Purpose : Ek character input se uska case (uppercase/lowercase) check karna.
 * 
 * Logic   : 
 *   - ASCII value check karte hain:
 *     - 65–90  → Uppercase (A–Z)
 *     - 97–122 → Lowercase (a–z)
 *     - Any other → Invalid character
 * 
 * Why Use: Character validation, username/email checking, etc. mein kaam aata hai.
 * 
 * Params : None (user input leta hai)
 * Return  : void
 */
void checkAlphabet() {
    char alphabet;
    printf("Enter any alphabet: ");
    getchar(); // Flush input buffer before reading character
    scanf("%c", &alphabet);

    if (alphabet >= 65 && alphabet <= 90) {
        printf("Given character is Uppercase: %c\n", alphabet);
    } else if (alphabet >= 97 && alphabet <= 122) {
        printf("Given character is Lowercase: %c\n", alphabet);
    } else {
        printf("Invalid character input.\n");
    }
}

/**
 * Function: checkDivisible
 * Purpose : Check karta hai ki given number 2 aur 3 dono se divisible hai ya nahi.
 * 
 * Logic   : num % 2 == 0 AND num % 3 == 0
 * 
 * Why Use: Number filters, divisible rules, optimization logics mein kaam aata hai.
 * 
 * Params : None (input inside function)
 * Return  : bool (true → divisible, false → not divisible)
 */
bool checkDivisible() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0)
        return true;
    else
        return false;
}

/**
 * Function: checkDivisible1
 * Purpose : Check karta hai ki number 7 aur 3 dono se divisible hai ya nahi.
 * 
 * Logic   : num % 7 == 0 AND num % 3 == 0
 * 
 * Why Use: Same as above – filtering & rules checking logic
 * 
 * Params : None (input inside function)
 * Return  : bool
 */
bool checkDivisible1() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 7 == 0 && num % 3 == 0)
        return true;
    else
        return false;
}

// =========================
// 🔹 Main Driver Function 🔹
// =========================
int main() {
    calculateProfitLoss();     // Business case
    passFail();                // Academic use-case
    checkAlphabet();           // Character validator

    // Divisibility check 2 & 3
    bool res1 = checkDivisible();
    printf("Divisible by 2 and 3: %s\n", res1 ? "Yes" : "No");

    // Divisibility check 7 & 3
    bool res2 = checkDivisible1();
    printf("Divisible by 7 and 3: %s\n", res2 ? "Yes" : "No");

    return 0;
}
