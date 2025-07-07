#include <stdio.h>

/**
 * Function: fact
 * Purpose: Kisi bhi positive number ka factorial calculate karna
 * 
 * Parameters:
 *   - n: jis number ka factorial chahiye
 * 
 * Returns:
 *   - factorial value agar input valid ho
 *   - -1 agar input invalid (n < 0)
 * 
 * Logic:
 *   - Loop chalao 1 se n tak, har step pe multiply karo
 * 
 * Use Case:
 *   - Combinations, Permutations, Mathematical calculations me
 */
int fact(int n)
{
    if (n < 0)
        return -1;

    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

/**
 * Function: combinations
 * Purpose: nCr calculate karta hai → total possible combinations
 * 
 * Parameters:
 *   - n: total items
 *   - r: selected items
 * 
 * Returns:
 *   - valid combination value
 *   - -1 if invalid input
 * 
 * Logic:
 *   - Formula: nCr = n! / (r! * (n-r)!)
 * 
 * Use Case:
 *   - Lottery, Team selection, Probability me use hota hai
 */
int combinations(int n, int r)
{
    if (r > n || r < 0 || n < 0)
        return -1;

    if (r == 0 || r == n)
        return 1;

    int factN = fact(n);
    int factR = fact(r);
    int factNR = fact(n - r);

    if (factN == -1 || factR == -1 || factNR == -1)
        return -1;

    return factN / (factR * factNR);
}

/**
 * Function: permutation
 * Purpose: nPr calculate karta hai → total possible arrangements
 * 
 * Parameters:
 *   - n: total items
 *   - r: selected items
 * 
 * Returns:
 *   - permutation value
 *   - -1 agar input invalid
 * 
 * Logic:
 *   - Formula: nPr = n! / (n-r)!
 * 
 * Use Case:
 *   - Seat arrangements, order-sensitive selection, etc.
 */
int permutation(int n, int r)
{
    if (r > n || r < 0 || n < 0)
        return -1;

    if (r == 0)
        return 1;

    int factN = fact(n);
    int factNR = fact(n - r);

    if (factN == -1 || factNR == -1)
        return -1;

    return factN / factNR;
}

/**
 * Function: checkDigit
 * Purpose: Kya koi digit given number ke andar hai ya nahi check karna
 * 
 * Parameters:
 *   - number: jisme check karna hai
 *   - digit: jis digit ko dhoondhna hai (0-9)
 * 
 * Returns:
 *   - 1 agar digit mil gaya
 *   - -1 agar digit nahi mila ya input galat
 * 
 * Use Case:
 *   - Password digit check, data validation, search within numbers
 */
int checkDigit(int number, int digit)
{
    if (digit < 0 || digit > 9)
        return -1;

    while (number > 0)
    {
        int rem = number % 10;
        if (rem == digit)
            return 1;
        number /= 10;
    }
    return -1;
}

/**
 * Function: primeFactor
 * Purpose: Diye gaye number ke sare prime factors print karta hai
 * 
 * Parameters:
 *   - n: jis number ke prime factors chahiye
 * 
 * Returns:
 *   - 1 after successfully printing all factors
 *   - -1 if input <= 1
 * 
 * Logic:
 *   - 2 se divide karna start karo, jab tak pura number toot na jaaye
 * 
 * Use Case:
 *   - Cryptography, LCM/HCF, Number theory problems
 */
int primeFactor(int n)
{
    if (n <= 1)
    {
        printf("Invalid input. Prime factorization possible only for integers > 1.\n");
        return -1;
    }

    int i = 2;
    printf("Prime factors of %d are: ", n);
    while (n > 1)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
        else
        {
            i++;
        }
    }
    return 1;
}

/**
 * Function: main
 * Purpose: Test karne ke liye individual functions ko call karta hai
 * 
 * NOTE:
 *   - Production code me unnecessary commented code hata dena chahiye
 *   - Sirf tested aur use ho raha code hi rakhna chahiye
 */
int main()
{
    //  Test factorial
    int f = fact(5);
    if (f != -1)
        printf("Factorial: %d\n", f);
    else
        printf("Invalid input for factorial\n");

    //  Test combinations
    int com = combinations(5, 3);
    if (com != -1)
        printf("Combinations (5C3): %d\n", com);
    else
        printf("Invalid input for combinations\n");

    //  Test permutations
    int order = permutation(5, 2);
    if (order != -1)
        printf("Permutations (5P2): %d\n", order);
    else
        printf("Invalid input for permutations\n");

    // Test digit checking
    int result = checkDigit(1234, 3);
    if (result == 1)
        printf("Digit FOUND in number.\n");
    else if (result == -1)
        printf("Digit NOT found or invalid input.\n");

    // Test prime factorization
    int prime = primeFactor(36);
    if (prime == 1)
        printf("\nPrime factorization completed.\n");

    return 0;
}
