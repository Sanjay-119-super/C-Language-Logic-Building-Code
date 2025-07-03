#include <stdio.h>

/*
 * Function Name: printPrimeUnder100
 * Purpose:
 *     - Is function ka kaam hai kisi bhi diya gaya number se chhote saare prime numbers print karna.
 * Reason:
 *     - Prime number check karna ek common requirement hoti hai jab number theory ya encryption jaise domains mein kaam hota hai.
 * Logic:
 *     - Outer loop har number ko check karta hai 2 se num-1 tak.
 *     - Inner loop uss number ke liye 2 se lekar us number se chhota tak divide hone ka check karta hai.
 *     - Agar number kisi bhi chhote number se divide nahi hota, toh wo prime hota hai.
 * Real-world Use-case:
 *     - Security algorithms jaise RSA mein prime number important hote hain.
 *     - Programming contests, school-level problems, aur optimization cases mein bhi kaam aata hai.
 */
void printPrimeUnder100(int num)
{
    int flag;
    if(num <= 0) {
        printf("Please enter only positive");
        return;
    }
    if(num == 1) {
        printf("1 not a prime num");
        return;
    }

    for (int i = 2; i < num; i++) {
        flag = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("prime -> %d\n", i);
        }
    }
}

/*
 * Function Name: printPrimeBetween
 * Purpose:
 *     - 10 se 30 ke beech mein jitne bhi prime numbers hain unko print karna.
 * Reason:
 *     - Fixed range ke andar prime check karna kabhi-kabhi UI, filtering, ya educational output ke liye useful hota hai.
 * Logic:
 *     - Har number ko 2 se lekar uske just pehle tak check karte hain.
 *     - Agar koi bhi number se divide nahi hota, toh prime maana jata hai.
 * Real-world Use-case:
 *     - Filtering options, puzzle games, ya number-based quiz tools mein kaam aata hai.
 */
void printPrimeBetween()
{
    int flag;
    for (int i = 10; i <= 30; i++) {
        flag = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("prime -> %d\n", i);
        }
    }
}

/*
 * Function Name: printNextPrime
 * Purpose:
 *     - Diye gaye number ke baad aane wala sabse pehla prime number print karna.
 * Reason:
 *     - Kabhi-kabhi kisi logic mein agla prime number chahiye hota hai jaise hash table size badhane ke time.
 * Logic:
 *     - Ek infinite loop chalate hain starting from num+1
 *     - Har number ke liye check karte hain kya wo kisi se divide nahi hota (prime condition)
 *     - Jaise hi pehla prime mile, print karke break kar dete hain.
 * Real-world Use-case:
 *     - Hash tables mein next prime size lena, cryptographic prime key find karna.
 */
void printNextPrime(int num)
{
    int flag;
    int number = num + 1;

    while (1) {
        flag = 0;
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf("next prime -> %d\n", number);
            break;
        }
        number++;
    }
}

/*
 * Function Name: HCF
 * Purpose:
 *     - Dono numbers ka Highest Common Factor (HCF) ya GCD nikalna.
 * Reason:
 *     - Fractions simplify karne, gears ka ratio nikalne, aur scheduling mein useful hota hai.
 * Logic:
 *     - 1 se leke minimum(a, b) tak loop chala ke check karte hain jo number dono ko divide karta hai.
 *     - Last valid divisible number hi HCF hota hai.
 * Real-world Use-case:
 *     - Fractions ko simplest form mein reduce karna, puzzle games, competitive programming.
 */
void HCF()
{
    int a = 12, b = 18, hcf;
    for (int i = 1; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    printf("HCF -> %d\n", hcf);
}

/*
 * Function Name: printCoPrime
 * Purpose:
 *     - Yeh check karna ki 2 numbers co-prime hain ya nahi.
 * Reason:
 *     - Co-prime ka matlab hota hai ki dono ke beech koi common factor nahi hota (except 1)
 *     - Iska use mathematical encryption, LCM calculation, aur logical puzzles mein hota hai.
 * Logic:
 *     - Dono numbers ke HCF ko check karte hain
 *     - Agar HCF == 1, toh numbers co-prime hain, otherwise nahi
 * Real-world Use-case:
 *     - Cryptographic key generation (RSA), maths puzzles, basic number theory learning.
 */
void printCoPrime()
{
    int gcd = 1, a = 12, b = 15;
    for (int i = 1; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    if (gcd == 1) {
        printf("Co-prime\n");
    } else {
        printf("Not Co-prime\n");
    }
}

int main()
{
    // printPrimeUnder100(100);   // Prime numbers below 100
    // printPrimeBetween();       // Prime between 10–30
    // printNextPrime(10);        // First prime after 10
    // HCF();                     // HCF of 12 and 18
    printCoPrime();               // Check if 12 and 15 are co-prime
}
