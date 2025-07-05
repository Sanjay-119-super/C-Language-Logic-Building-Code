#include<stdio.h>
void star1()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void start2()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=5; j>=1; j--)
        {
            if(j<i)
                printf("*");
            else
                printf(" ");    
        }
        printf("\n");
    }
}

void start3()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=6-i; j++)
        {
            
                printf("*");
               
        }
        printf("\n");
    }
}
void star4()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        int num=1;
        for(j=1; j<=i; j++){
            printf("%d ",num++);
        }
        printf("\n");
    }
}
void star7()
{
    int i,j;
    char ch;
    for(i=1; i<=5; i++)
    {   ch='A';
        for(j=1; j<=6-i; j++)
        {
            
                printf("%c ",ch++);

                
               
        }
        printf("\n");
    }
}

void star8()
{
    int i,j;
    int num=1;
    for(i=1; i<=4; i++)
    {
        
        for(j=1; j<=i; j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}



int main()
{
    //star1();
    start2();
   //start3();
   //star4();
  // star8();

  star7();
}