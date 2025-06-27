#include <stdio.h>

/**
 * Function: convert
 * Purpose : USD amount ko INR me convert karna
 * Logic   : INR = USD × 84.23
 * Use     : Real-world apps like PayPal, Forex, Travel portals, etc.
 */
void convert() {
    float USD_RATE = 84.23f; // 1 USD = ₹84.23
    float USD;

    printf("Enter the amount in USD: ");
    scanf("%f", &USD);

    // ✅ Validation: Amount should be non-negative
    if (USD < 0) {
        printf(" Error: USD amount cannot be negative.\n");
        return;
    }

    float INR = USD * USD_RATE;

    printf("💱 Converted Amount: $%.2f USD = ₹%.2f INR\n", USD, INR);
}


/**
 * Function: rotate
 * Purpose : 3-digit number ke digits ko rotate karna (last digit ko front pe lana)
 * Example : 123 → 312
 * Use     : Digit manipulation questions me kaam aata hai
 */
int rotate() {
    int num = 123;

    // ✅ Break number into digits
    int n1 = num % 10;       // Last digit = 3
    int newN1 = num / 10;    // Remaining = 12

    int n2 = newN1 % 10;     // Middle digit = 2
    int newN2 = newN1 / 10;  // First digit = 1

    int rotated = n1 * 100 + n2 * 10 + newN2; // 312

    printf("🔁 Rotated Number: %d → %d\n", num, rotated);
    return 0;
}


/**
 * Function: printValues
 * Purpose : Logical & relational expressions ka output samajhna
 * Use     : Interview traps me yeh wale expressions aksar pooche jaate hain
 */
void printValues() {
    int x;
    x = 10 > 8 > 4;
    // Step-by-step:
    // 10 > 8 = true (1), so 1 > 4 = false (0)
    printf("Expression: 10 > 8 > 4 → Value = %d\n", x); // 0

    int y;
    y = !2 > -2;
    // !2 = false = 0 → 0 > -2 = true = 1
    printf("Expression: !2 > -2 → Value = %d\n", y); // 1

    int z;
    z = 3 > 0 && 5 > 0;
    // 3 > 0 = true, 5 > 0 = true → true && true = true = 1
    printf("Expression: 3 > 0 && 5 > 0 → Value = %d\n", z); // 1
}


/**
 * 🔹 Main Function
 * Purpose: Run and test individual modules
 */
int main() {
   
    convert();
    rotate();
    
    printValues();

    return 0;
}
