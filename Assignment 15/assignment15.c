#include<stdio.h>
void printPrimeUnder100(int num)
{
    int flag;
    // Case -1 
    if(num<=0) 
    {
        printf("Please enter only positive");
        return;
    }
    if(num==1) 
    {
        printf("1 not a prime num");
        return;
    }

    for (int i = 2; i < num; i++)
    {
        flag=0;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;
            }
            
        }

        if (flag==0)
        {
           printf(" prime->%d \n" , i);
        }
        
        
    }
    
}

void printPrimeBetween()
{
    int flag;
    for (int i = 10; i <= 30; i++)
    {
        flag=0;
        for (int j = 2; j <i ; j++)
        {
           if (i%j==0)
           {
             flag=1;
             break;
           }
           
        }
        if (flag==0)
        {
           printf("prime->%d\n",i);
        }
        
        
    }
    
}
void printNextPrime(int num)
{

    int flag;
    int number=num+1;
    while (1)
    {
        flag=0;
        for (int i = 2; i < number; i++)
        {
            if (number%i==0)
            {
               flag=1;
               break;
            }
            
        }
        if (flag==0)
        {
            printf("next prime-> %d",number);
            break;
        
        }   
            
      number++; 
    }
    
    
    
}

void HCF()
{
    int a=12, b=18,hcf;
    for (int i = 1; i <=(a<b ? a:b); i++)
    {
        if (a%i==0 && b%i==0)
        {
            hcf=i;
        }
        
    }
    printf(" HCF-> %d",hcf);
    
}

void printCoPrime()
{

    int gcd=1 , a=12, b=15;
    for (int i = 1; i <= (a<b ? a:b); i++)
    {
        if(a%i==0 && b%i==0){
        gcd=i;

        }
    }
    if (gcd==1)
    {
        printf("CO prime");
    }
    else
    {
        printf("Not co prime");
    }
    
    
}

int main()
{
    // int n=100;
    // printPrimeUnder100(n);

   // printPrimeBetween();
   //printNextPrime(10);
   //HCF();
   printCoPrime();


}