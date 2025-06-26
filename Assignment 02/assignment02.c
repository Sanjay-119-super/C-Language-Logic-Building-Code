#include<stdio.h>

int averageCalculate()
{
    int a, b,c;
    printf("Enter the numbers for calculating average:");
    scanf("%d %d %d", &a, &b, &c);
    return (a+b+c)/3;

}

float circumferenceOfCircle()
{
    float radius;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    return 2*3.14*radius;
}

double simpleInterest()
{
    double p, rate, time;
    printf("Enter the p , rate , time for calculating simple interest: ");
    scanf("%lf %lf %lf", &p,&rate,&time);
    return (p*rate*time)/100;
}

float volumeOfCuboid()
{
    float l, w,h;
    printf("Enter the l,w,h");
    scanf("%f %f %f",&l,&w,&h);
    return l*w*h;
}
 void calculateLossProfit()
 {
    int costPrice , SellingPrice;
    printf("Enter the cost price of 12 banana");
    scanf("%d",&costPrice);
    printf("Enter the selling price of 12 banana");
    scanf("%d",&SellingPrice);
    // cp and sp of 25 banana
    int cp = costPrice/12;
    int sp = SellingPrice/12;
    int profitLoss = (sp-cp)*25;
    if (profitLoss>0)
    {
        printf("profit huaa hai %d",profitLoss);
    }
    else if(profitLoss<0)
    {
        printf("Loss huaa hai %d", profitLoss);
    }
    else
    {
        printf("no profit no loss");
    }



 }

int main()
{
    /*
    int res=averageCalculate();
    printf("Average of three numbers: %d ",res);

    float res1 = circumferenceOfCircle();
    printf("Circumference of circle %f: " , res1);
    

    double si = simpleInterest();
    printf("Simple interest %lf: " ,si);
    

    float volume = volumeOfCuboid();
    printf("Volume of cuboid %f: " ,volume);
    */
   calculateLossProfit();
}