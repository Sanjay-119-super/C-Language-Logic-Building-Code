#include <stdio.h>

/*
====================================================================================
Function: input
------------------------------------------------------------------------------------
Purpose:
  User se array ke elements input lena.

Parameters:
  - input[] : integer array jisme user values input karega
  - size    : array ka size (kitne elements input lene hai)

Working:
  - Loop chalayenge 0 se size-1 tak
  - Har index ke liye user se ek integer lenge aur array me store karenge

Real-World Use:
  - Jab bhi kisi user ko dynamic data bharwana ho (e.g. salary, marks, product prices)
====================================================================================
*/
void input(int input[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Enter the array element at index %d : ", i);
        scanf("%d", &input[i]);
    }
}

/*
====================================================================================
Function: sumOfArray
------------------------------------------------------------------------------------
Purpose:
  Array ke saare elements ka total sum nikalna

Parameters:
  - num[] : input array
  - n     : array ka size

Return:
  - int sum : saare elements ka total sum

Logic:
  - sum variable initialize karte hai 0 se
  - Har index par jaake value ko sum me add karte hai

Real-Life Use:
  - Financial reports me total sales, income calculate karna
  - Sensor data aggregation jaise temperature logs ka average lena
====================================================================================
*/
int sumOfArray(int num[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += num[i];
    }
    return sum;
}

/*
====================================================================================
Function: avg
------------------------------------------------------------------------------------
Purpose:
  Array ke elements ka average calculate karna

Parameters:
  - nums[] : input array
  - size   : array ka size

Return:
  - float average : total sum / size

Logic:
  - sumOfArray() se sum nikalte hai
  - fir divide karte hai size se

Real-Life Use:
  - School me student ke average marks
  - Company me employee ka average performance rating
====================================================================================
*/
int avg(int nums[], int size)
{
    int sum = sumOfArray(nums, size);
    return (float)sum / size;
}

/*
====================================================================================
Function: sumEven
------------------------------------------------------------------------------------
Purpose:
  Array ke even numbers ka sum calculate karna

Logic:
  - Har element ko check karo
  - Agar even hai to sum me add karo

Use Case:
  - Even roll numbers wale students ki fees ka total
====================================================================================
*/
int sumEven(int nums[], int size)
{
    int evenSum = 0;
    for(int i = 0; i < size; i++)
    {
        if(nums[i] % 2 == 0)
            evenSum += nums[i];
    }
    return evenSum;
}

/*
====================================================================================
Function: sumOdd
------------------------------------------------------------------------------------
Purpose:
  Array ke odd numbers ka sum calculate karna

Use Case:
  - Odd floors wale building ka electricity usage total
====================================================================================
*/
int sumOdd(int nums[], int size)
{
    int oddSum = 0;
    for(int i = 0; i < size; i++)
    {
        if(nums[i] % 2 != 0)
            oddSum += nums[i];
    }
    return oddSum;
}

/*
====================================================================================
Function: firstGreatesNumber
------------------------------------------------------------------------------------
Purpose:
  Array me sabse bada element nikalna

Logic:
  - max ko first element se initialize karo
  - har element se compare karke update karo

Real Life:
  - Cricket match me highest scorer nikalna
====================================================================================
*/
int firstGreatesNumber(int nums[], int size)
{
    int max = nums[0];
    for(int i = 0; i < size; i++)
    {
        if(nums[i] > max)
            max = nums[i];
    }
    return max;
}

/*
====================================================================================
Function: smallestNumber
------------------------------------------------------------------------------------
Purpose:
  Array me sabse chhoti value nikalna

Logic:
  - min ko pehle element se initialize karo
  - loop chala ke har element se compare karke update karo

Use Case:
  - Lowest temperature, lowest expense, lowest salary in company etc.
====================================================================================
*/
int smallestNumber(int nums[], int size)
{
    int min = nums[0];
    int i = 0;
    while(i < size)
    {
        if(nums[i] < min)
            min = nums[i];
        i++;
    }
    return min;
}

/*
====================================================================================
Function: main
------------------------------------------------------------------------------------
Purpose:
  Program ka entry point hai. Array input leta hai aur functions ko call karke
  result print karta hai.

Memory Insight:
  - Array dynamically stack par create hota hai (arr[size])
  - Sab functions pass-by-reference ka kaam karte hai for efficiency
====================================================================================
*/
int main()
{
    int size;
    printf("Enter the size of an Array: ");
    scanf("%d", &size);

    int arr[size];  // Stack memory me array create
    input(arr, size);

    // Uncomment functions to test:
    
    // printf("Sum of Array elements: %d\n", sumOfArray(arr, size));
    // printf("Average of Array elements: %d\n", avg(arr, size));
    // printf("Sum of Even numbers: %d\n", sumEven(arr, size));
    // printf("Sum of Odd numbers: %d\n", sumOdd(arr, size));
    // printf("Greatest number is: %d\n", firstGreatesNumber(arr, size));

    printf("Smallest number is: %d\n", smallestNumber(arr, size));

    return 0;
}
