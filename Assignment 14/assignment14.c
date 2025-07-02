#include<stdio.h>
#include<stdbool.h>

/// Function: fact
/// Purpose: Kisi bhi positive number ka factorial nikalna
/// Logic: 1 * 2 * 3 * ... * n (loop se multiplication)
/// Real-World Use: Maths calculations, probability, permutations
int fact(int number)
{
    int fact = 1, i = 1;
    while (i <= number)
    {
        fact *= i;
        i++;
    }
    return fact;
}

/// Function: countDigit
/// Purpose: Kisi number mein total kitne digits hain wo count karna
/// Logic: Har baar 10 se divide karne se ek digit remove hoti hai
/// Real-World Use: OTP, phone number validation, digit-based logic
int countDigit(int num)
{
    int count = 0;
    while (num > 0)
    {
        num = num / 10;  // last digit remove karo
        count++;         // count increase karo
    }
    return count;
}

/// Function: helper
/// Purpose: User se valid positive input lena (0 ya -ve reject hoga)
/// Logic: Do-while jaisa kaam: jab tak input valid na ho, tab tak repeat
/// Real-World Use: Validation logic before processing data
int helper(const char* sms)
{
    int num;
    printf("%s", sms);
    scanf("%d", &num);
    while (num <= 0)
    {
        printf("Please enter a number greater than 0.\n");
        scanf("%d", &num);
    }
    return num;
}

/// Function: primeOrNot
/// Purpose: Batana ki number prime hai ya nahi
/// Logic: 2 se n/2 tak check karo koi factor hai ya nahi
/// Real-World Use: Cryptography, Number theory, Random number generation
void primeOrNot(int num)  
{
    int flag = 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0 && num > 1)
        printf("Prime Number\n");
    else
        printf("Not Prime Number\n");
}

/// Function: LCM
/// Purpose: Do number ka LCM nikalna (Least Common Multiple)
/// Logic: Jo dono number se divide ho jaaye, wo minimum aisa number
/// Real-World Use: Time calculations, event scheduling, mathematics
int LCM(int a, int b)
{
    int max = (a > b) ? a : b;
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        max++;
    }
}

/// Function: reverse
/// Purpose: Number ko ulta print karna (54321 → 12345)
/// Logic: Har baar %10 se last digit nikalo, /10 se hata do
/// Real-World Use: Palindrome check, number reversing, pattern generation
void reverse(int num)
{
    while (num > 0)
    {
        int digit = num % 10;   // last digit nikaalo
        printf("%d", digit);    // print karo
        num = num / 10;         // last digit hatao
    }
}

/// Main Function: Testing zone
/// First Thought Principle: Pehle user se input leke valid banana, fir har module ko alag se call karna
int main()
{
    int n;

    // Factorial Test
    n = helper("Enter a number for factorial: ");
    printf("Factorial is %d \n\n", fact(n));

    // Count digit test
    n = helper("Enter a number to count digits: ");
    printf("Total digits: %d\n\n", countDigit(n));

    // Prime check test
    n = helper("Enter a number to check prime or not: ");
    primeOrNot(n);

    // LCM test
    int a = helper("Enter first number for LCM: ");
    int b = helper("Enter second number for LCM: ");
    printf("LCM is %d\n\n", LCM(a, b));

    // Reverse number test
    n = helper("Enter a number to reverse: ");
    printf("Reversed number: ");
    reverse(n);
    printf("\n");

    return 0;
}
