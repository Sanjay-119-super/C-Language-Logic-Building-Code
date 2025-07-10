#include <stdio.h>
#include <limits.h>  // INT_MAX aur INT_MIN use karne ke liye required

/*
    Function: input
    Purpose: User se array ke elements input lena
    Parameters:
        - input[]: integer array jisme values store karni hain
        - size: array ka size
    Logic:
        - for loop se har index pe jaake value input lete hain
    Real-world Use Case:
        - User ratings, survey responses, sensor readings jaise data collection systems me use hota hai
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
    Function: sortElements
    Purpose: Array ko ascending order me sort karna using Bubble Sort
    Parameters:
        - nums[]: input array
        - size: array ka size
    Logic:
        - Har round me adjacent elements ko compare karke swap karte hain agar left value badi ho
        - flag variable ka use hota hai to detect early sorted condition
    Real-world Use Case:
        - Price sorting (low to high), data analytics, and real-time dashboards
*/
void sortElements(int nums[], int size)
{
    int round, i, flag;
    for(round = 0; round < size; round++)
    {
        flag = 0;
        for(i = 0; i < size - round - 1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                int temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
                flag = 1;  // swapping hui, toh flag set
            }
        }
        if(flag == 0)
            break;  // agar kisi round me koi swap nahi hui, toh array already sorted hai
    }
}


/*
    Function: firstGreatesNumber_helper
    Purpose: Array me sabse bada number (maximum) find karna
    Parameters:
        - nums[]: input array
        - size: array ka size
    Return:
        - maximum number
    Logic:
        - Simple loop se max variable track karke update hota hai jab naya max mile
    Use Case:
        - Top scorer, maximum transaction value, highest CPU usage etc.
*/
int firstGreatesNumber_helper(int nums[], int size)
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
    Function: secondLargest
    Purpose: Array me second largest element find karna
    Parameters:
        - num[]: input array
        - size: array ka size
    Return:
        - second highest value
    Logic:
        - Pehle first max nikaalte hain
        - Fir first ke equal elements skip karke dusra max search karte hain
        - INT_MIN se initialize karne ka matlab hai ki koi bhi number isse bada hoga
    Use Case:
        - Leaderboard me second position, second highest sales report, backup value analysis
*/
int secondLargest(int num[], int size)
{
    int first = firstGreatesNumber_helper(num, size);
    int second = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        if(num[i] != first && num[i] > second)
            second = num[i];
    }
    return second;
}


/*
    Function: sortElementsDec
    Purpose: Array ko descending order me sort karna
    Parameters:
        - nums[]: input array
        - size: array ka size
    Logic:
        - Bubble sort ka reverse logic apply karte hain: left < right ho toh swap
        - flag variable early stopping ke liye
    Use Case:
        - Top 10 products display, sales leaderboard, performance ranking
*/
void sortElementsDec(int nums[], int size)
{
    int round, i, flag;
    for(round = 0; round < size; round++)
    {
        flag = 0;
        for(i = 0; i < size - round - 1; i++)
        {
            if(nums[i] < nums[i+1])
            {
                int temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
}


/*
    Function: copyArray
    Purpose: Ek array ko dusre array me copy karna (temporary copy)
    Parameters:
        - nums[]: original array
        - size: size of the array
    Logic:
        - Simple loop me ek naya array create karke har element copy karte hain
    Use Case:
        - Backup copy, undo feature, temporary buffer me data save karna
*/
void copyArray(int nums[], int size)
{
    int temp[size];
    for(int i = 0; i < size; i++)
    {
        temp[i] = nums[i];
    }

    printf("Copied array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", temp[i]);
    }
}


/*
    Function: smallestNumber
    Purpose: Array me sabse chhota element find karna
    Parameters:
        - nums[]: input array
        - size: array size
    Return:
        - Minimum element
    Logic:
        - min variable me sabse chhoti value track hoti hai
    Use Case:
        - Minimum price, least performing unit, smallest transaction etc.
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
    Function: secondSmallest
    Purpose: Array me second minimum element find karna
    Parameters:
        - nums[]: input array
        - size: array size
    Return:
        - Second smallest element
    Logic:
        - Pehle smallest nikaalte hain
        - Fir loop me smallest ke equal value ko skip karke second min nikaalte hain
        - INT_MAX se initialize karna important hai taaki real number chhota lag sake
    Use Case:
        - Budget analysis, second lowest price finder, backup ranking
*/
int secondSmallest(int nums[], int size)
{
    int smallest = smallestNumber(nums, size);
    int secondSmallest = INT_MAX;

    for(int i = 0; i < size; i++)
    {
        if(nums[i] != smallest && nums[i] < secondSmallest)
            secondSmallest = nums[i];
    }
    return secondSmallest;
}


/*
    Function: main
    Purpose: Program execution ka entry point
    Steps:
        - User se size input lena
        - Array input lena
        - Required functionality call karna (jaise sorting, searching, second min, etc.)
    Note:
        - Modularity maintain karne ke liye har functionality ko function me likha gaya hai
        - Isse code reuse, testing aur debugging easy hoti hai
*/
int main()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];
    input(arr, size);

    // Uncomment one of the test cases at a time

    // sortElements(arr, size);
    // printf("Sorted array (Ascending): ");
    // for(int i = 0; i < size; i++)
    //     printf("%d ", arr[i]);

    // int second = secondLargest(arr, size);
    // printf("Second largest element is: %d\n", second);

    // sortElementsDec(arr, size);
    // printf("Sorted array (Descending): ");
    // for(int i = 0; i < size; i++)
    //     printf("%d ", arr[i]);

    // copyArray(arr, size);

    int second = secondSmallest(arr, size);
    printf("Second smallest element is: %d\n", second);

    return 0;
}
