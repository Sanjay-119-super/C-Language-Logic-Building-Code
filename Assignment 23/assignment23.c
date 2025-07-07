#include <stdio.h>

/*
    Function: lcm()
    Purpose: Do numbers ka LCM (Least Common Multiple) nikalta hai
    Logic: Dono numbers se divide hone wala sabse chhota number
    Use case: Timetable sync, repeating events, fraction ke denominator ka LCM lena
*/
int lcm(int a, int b)
{
    int max = a > b ? a : b;
    int lcm;
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }
        max++;
    }
    return lcm;
}

/*
    Function: hcf()
    Purpose: Do numbers ka HCF (Highest Common Factor) nikalta hai
    Logic: Dono numbers ko divide karne wala sabse bada number
    Use case: Fraction simplification, GCD-based optimizations
*/
int hcf(int a, int b)
{
    int min = (a < b) ? a : b;
    int hcf;
    while (min > 0)
    {
        if (a % min == 0 && b % min == 0)
        {
            hcf = min;
            break;
        }
        min--;
    }
    return hcf;
}

/*
    Function: primeNumber()
    Purpose: Check karta hai ki koi number prime hai ya nahi
    Logic: Agar 2 se leke n-1 tak koi bhi number use divide kare toh prime nahi hai
    Return: 1 = Prime, 0 = Not Prime, -1 = Invalid input (<=1)
    Use case: Cryptography, math puzzles, hashing, key generation
*/
int primeNumber(int n)
{
    if (n <= 1) return -1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

/*
    Function: findNextPrime()
    Purpose: Diye gaye number ke baad ka next prime number return karta hai
    Logic: next number se check karte jao jab tak prime na mil jaye
    Use case: Random key generation, next prime search, math generators
*/
int findNextPrime(int given)
{
    int nextPrime = given + 1;

    while (1)
    {
        if (primeNumber(nextPrime))
        {
            return nextPrime;
        }
        nextPrime++;
    }
}

/*
    Function: printFirstNPrimes()
    Purpose: Pehle 'n' prime numbers print karta hai
    Logic: 2 se start karke har number check karo prime hai ya nahi, jab tak count == n
    Use case: Educational apps, math tools, key/ID generation
*/
int printFirstNPrimes(int n)
{
    int count = 0, number = 2;

    while (count < n)
    {
        if (primeNumber(number))
        {
            printf("%d ", number);
            count++;
        }
        number++;
    }
    return 1; // Optional return (successful print)
}

/*
    Function: main()
    Purpose: Sabhi functions ko call karke test karta hai
    Output: LCM, HCF, Prime check, Next prime, First N primes
*/
int main()
{
    int l = lcm(4, 6);
    printf("LCM = %d\n", l);

    int h = hcf(12, 4);
    printf("HCF = %d\n", h);

    int p = primeNumber(5);
    printf("Prime check = %d\n", p);

    int f = findNextPrime(11);
    printf("Next Prime = %d\n", f);

    printf("First 10 Prime Numbers: ");
    printFirstNPrimes(10); // Iska output direct print hota hai
    printf("\n");

    return 0;
}
