#include <stdio.h>

/*
================================================================================
Function Name   : isPrime
--------------------------------------------------------------------------------
Purpose         : Yeh function check karta hai ki diya gaya number prime hai ya nahi.
                 Prime number woh hota hai jo sirf 1 aur khud se divide hota hai.
Parameters      : 
  - num (int) : Input number jisko check karna hai prime ke liye.
Returns         : 
  - 1 : Agar number prime hai.
  - 0 : Agar number prime nahi hai.
  - -1 : Agar number 1 ya usse chhota hai (invalid case).
--------------------------------------------------------------------------------
Internal Logic  : 
  - Step 1: Agar number 1 ya usse chhota ho to return -1 (kyunki wo prime nahi hote)
  - Step 2: 2 se lekar number-1 tak loop chalao aur check karo koi number divide karta hai ya nahi.
  - Step 3: Agar koi divide kare to prime nahi, warna prime hai.
Real-World Use  : 
  - RSA Encryption algorithms me prime numbers ka use hota hai.
  - Secure key generation ke liye blockchain me bhi prime numbers use hote hain.
  - Interview me isPrime function logic pucha jata hai frequently.
================================================================================
*/
int isPrime(int num)
{
    if(num <= 1) return -1;
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

/*
================================================================================
Function Name   : printAllPrimeBetweenTwoNumbers
--------------------------------------------------------------------------------
Purpose         : Dono diye gaye numbers ke beech jitne bhi prime numbers honge unhe print karta hai.
Parameters      : 
  - start (int) : Starting number of range.
  - end   (int) : Ending number of range.
Returns         : 
  - Total number of prime numbers found between the given range.
--------------------------------------------------------------------------------
Internal Logic  : 
  - Loop chalao start se end tak.
  - Har number pe isPrime() function lagake check karo.
  - Agar prime ho to print karo aur count badhao.
Real-World Use  : 
  - Prime numbers ka use cryptographic systems me hota hai.
  - Large dataset me filtering karne ke liye helpful logic.
================================================================================
*/
int printAllPrimeBetweenTwoNumbers(int start, int end)
{
    int count = 0;
    for(int i = start; i <= end; i++)
    {
        if(isPrime(i)){
            printf("%d ", i);
            count++;
        }
    }
    return count;
}

/*
================================================================================
Function Name   : fibbo
--------------------------------------------------------------------------------
Purpose         : Fibonacci series ke first 'n' terms ko print karta hai.
Parameters      : 
  - num (int) : Kitne terms tak Fibonacci print karna hai.
Returns         : 
  - Total number of terms printed.
--------------------------------------------------------------------------------
Internal Logic  : 
  - First 2 terms fix hote hain: 0 aur 1.
  - Uske baad har next term = previous 2 terms ka sum hota hai.
  - Yeh loop ke through calculate hota hai.
Real-World Use  : 
  - Fibonacci sequence nature me bhi use hota hai jaise flower petals.
  - Finance aur growth model me bhi use hota hai.
================================================================================
*/
int fibbo(int num)
{
    int f = 0, s = 1, next, count = 2;
    printf("\n");
    printf("%d %d ", f, s);
    for(int i = 3; i <= num; i++)
    {
        next = f + s;
        printf("%d ", next);
        f = s;
        s = next;
        count++;
    }
    return count;
}

/*
================================================================================
Function Name   : fact
--------------------------------------------------------------------------------
Purpose         : Kisi number ka factorial calculate karta hai (n!).
Parameters      : 
  - num (int) : Input number jiska factorial chahiye.
Returns         : 
  - num! (int) : Factorial result.
--------------------------------------------------------------------------------
Internal Logic  : 
  - 1 se num tak sabhi numbers ko multiply karte hain.
  - Result me har step ka multiplication store hota hai.
Real-World Use  : 
  - Factorial combinations and permutations me kaam aata hai.
  - Probability ke formulas me bhi ye use hota hai.
================================================================================
*/
int fact(int num)
{
    int f = 1;
    for(int i = 1; i <= num; i++)
    {
        f *= i;
    }
    return f;
}

/*
================================================================================
Function Name   : combination
--------------------------------------------------------------------------------
Purpose         : nCr calculate karta hai (kitne ways me r items choose kar sakte ho n me se).
Parameters      : 
  - n (int), r (int) : Combination input values.
Returns         : 
  - int : Result of nCr using formula.
--------------------------------------------------------------------------------
Internal Logic  : 
  - nCr = n! / (r! * (n - r)!)
  - fact() function use karke numerator aur denominator calculate karte hain.
Real-World Use  : 
  - Probability aur Pascal Triangle banane me.
  - Game theory aur competitive programming me bhi.
================================================================================
*/
int combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

/*
================================================================================
Function Name   : pascalTriangle
--------------------------------------------------------------------------------
Purpose         : Diye gaye rows ka Pascal Triangle banata aur print karta hai.
Parameters      : 
  - r (int) : Number of rows.
Returns         : 
  - 1 : Print successful.
--------------------------------------------------------------------------------
Internal Logic  : 
  - Outer loop se row banate hain.
  - Inner loop me combination(i,j) ka use karke value print karte hain.
  - Extra space print karke triangle shape maintain karte hain.
Real-World Use  : 
  - Binomial expansion ka visual form.
  - Maths aur pattern based reasoning problems ke liye.
================================================================================
*/
int pascalTriangle(int r)
{
    for(int i = 0; i < r; i++)
    {
        for(int space = 0; space < r - i - 1; space++)
        {
            printf("  ");
        }
        for(int j = 0; j <= i; j++)
        {
            printf("%4d", combination(i, j));
        }
        printf("\n");
    }
    return 1;
}

/*
================================================================================
Function Name   : Armstrong
--------------------------------------------------------------------------------
Purpose         : Diye gaye range me Armstrong numbers find karta hai aur print karta hai.
Parameters      : 
  - low (int)  : Starting number of range.
  - high (int) : Ending number of range.
Returns         : 
  - Total Armstrong numbers found and printed.
--------------------------------------------------------------------------------
Internal Logic  : 
  - Har number ke digits ka cube nikal kar unka sum check karte hain.
  - Agar sum original number ke equal ho to Armstrong number hota hai.
Real-World Use  : 
  - Number theory aur puzzle based coding questions me use hota hai.
================================================================================
*/
int Armstrong(int low, int high)
{
    int count = 0;
    for(int i = low; i <= high; i++)
    {
        int num = i;
        int sum = 0;
        while(num > 0)
        {
            int digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }
        if(sum == i)
        {
            printf("%d ", sum);
            count++;
        }
    }
    return count;
}

/*
================================================================================
Function Name   : sumOfSeries
--------------------------------------------------------------------------------
Purpose         : 1! + 2! + 3! + ... + n! ka total sum calculate karta hai.
Parameters      : 
  - num (int) : Series ka last number.
Returns         : 
  - int : Final sum of factorials from 1 to num.
--------------------------------------------------------------------------------
Internal Logic  : 
  - fact(i) calculate karke sum me add karte hain.
  - Loop 1 se num tak chalta hai.
Real-World Use  : 
  - Taylor series, mathematical approximations, coding challenges.
================================================================================
*/
int sumOfSeries(int num)
{
    int sum = 0;
    for(int i = 1; i <= num; i++)
    {
        sum += fact(i);
    }
    return sum;
}

/*
================================================================================
Function Name   : main
--------------------------------------------------------------------------------
Purpose         : Sabhi logic functions ko call karke demo run karta hai.
                 Program ka entry point hai.
================================================================================
*/
int main()
{
    // Prime check
    int totalPrimes = printAllPrimeBetweenTwoNumbers(10, 20);
    printf("\nTotal Primes = %d\n", totalPrimes);

    // Fibonacci series
    int totalFibo = fibbo(5);
    printf("\nTotal Fibonacci terms = %d\n", totalFibo);

    // Pascal Triangle
    int pascal = pascalTriangle(5);
    if(pascal == 1)
    {
        printf("Pascal Triangle Printed Successfully.\n");
    }

    // Armstrong numbers
    int armstrongCount = Armstrong(100, 999);
    printf("\nTotal Armstrong numbers = %d\n", armstrongCount);

    // Factorial series sum
    int seriesSum = sumOfSeries(5);
    printf("\nSum of factorial series (1! + 2! + ... + 5!) = %d\n", seriesSum);

    return 0;
}
