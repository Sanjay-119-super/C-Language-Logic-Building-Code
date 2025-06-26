#include<stdio.h>
void sizeOfChar()
{
    char c = 'A';
    printf("Size of char: %zu bytes\n",sizeof(c));
    return;
}
void sizeOfReal()
{
    float f = 1.5;
    printf("Size of real constant %zu byte: \n", sizeof(f));
    return;
}
void changeValue()
{
    char c = 'A';
    printf("Original value: %c \n", c);
    c++;
    printf("Updated value: %c \n", c);
    return;
}
void swapWithTemp()
{
    int a =5, b=10;
    printf("Before swap ->%d and %d \n", a,b);
    int temp=a;
    a=b;
    b=temp;
    
    printf("After swap ->%d and %d \n", a,b);
    return;

}
void swap()
{
    int a=5,b=10;
    printf("Before swap ->%d and %d \n", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap ->%d and %d \n", a,b);
    return;
}
void swapHard()
{
    int a =5, b=10;
    printf("Before swap ->%d and %d \n", a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swap ->%d and %d \n", a,b);
    return;


}
void swapWithout()
{
    int a =5, b=10;
    printf("Before swap ->%d and %d \n", a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After swap ->%d and %d \n", a,b);
    return;


}
void swapSingleLine()
{
    int a=5,b=10;
    printf("Before swap ->%d and %d \n", a,b);
    b=a+b-(a=b);
    printf("After swap ->%d and %d \n", a,b);
    return;


}

int main()
{
    /*
    sizeOfChar();
    
   sizeOfReal();
   
  changeValue();
  
 swap();
 
swapWithTemp();

swapHard();

swapWithout();
*/
swapSingleLine();
    return 0;

}