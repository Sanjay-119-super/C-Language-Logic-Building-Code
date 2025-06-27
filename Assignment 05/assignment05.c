#include<stdio.h>

int sumOfDigits()
{
    int num=123;

    int n1=num%10; // 3
    int newNum1= num/10; // 123--> 12

    int n2=newNum1%10; // 2
    int newNum2=newNum1/10;  //1

    int sum=n1+n2+newNum2;
    return sum;
    
    
}
void aSCIICode()
{
    char c ='+';
    printf("Ascii Code %d " , c);
    return;
}
void printSize()
{
    char c ='A';
    int a = 100;
    float f = 5.4f;
    double d  = 10.22;
    printf("size of char %zu \n", sizeof(c));
    printf("size of int %zu \n", sizeof(a));
    printf("size of float %zu \n", sizeof(f));
    printf("size of double %zu \n", sizeof(d));
}
void lastDigitZero()
{
    int num =2345;
    int res = (num/10)*10;
    printf("Result %d", res);
    return;
}
void input()
{
    int number = 234;
    int digit =9;
    printf("Number  | digit %d%d", number,digit);
    return;
}
int main()
{
    /*
    int sum=sumOfDigits();
    printf("Sum of digits %d", sum);
    return 0;
    
   aSCIICode();
   
  printSize();
  
 lastDigitZero();
 */
input();
}