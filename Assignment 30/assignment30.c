#include <limits.h> // Required for INT_MAX
#include<stdio.h>

void input(int input[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Enter the array element at index %d : ", i);
        scanf("%d", &input[i]);
    }
}


void sortElements(int nums[], int size)
{
    int round, i,flag;
    for(round=0; round<size; round++)
    {
        flag=0;
        for(i=0;i<size-round-1; i++)
        {
            if(nums[i]>nums[i+1])
            {
                int temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
            }
            flag++;
        }
        if(flag==1)
         break;
    }
   
}

//Q2
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
int secondLargest(int num[] ,int size)
{
    int first=firstGreatesNumber_helper(num,size);
    int second=INT_MAX;
    if(first==1) return 0;
    for(int i=0; i<size; i++)
    {
        if(num[i] !=first && num[i]>second)
            second=num[i];
    }
    return second;
}
//Q3
void sortElementsDec(int nums[], int size)
{
    int round, i,flag;
    for(round=0; round<size; round++)
    {
        flag=0;
        for(i=0;i<size-round-1; i++)
        {
            if(nums[i]<nums[i+1])
            {
                int temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
            }
            flag++;
        }
        if(flag==1)
         break;
    }
   
}
void copyArray(int nums[] , int size)
{
    int temp[size];
    for(int i=0; i<size; i++)
    {
        temp[i]=nums[i];
    }
    printf("copied array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",temp[i]);
    }
}
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

int secondSmallest(int nums[], int size)
{
    int smallest=smallestNumber(nums,size);
    int secondSmallest=nums[0];

    for(int i=0; i<size; i++)
    {
        if(nums[i] != smallest && nums[i] < secondSmallest)
            secondSmallest=nums[i];
    }
    return secondSmallest;
}

int main()
{
    int size;
    printf("Enter the array of size: ");
    scanf("%d",&size);

    int arr[size];
    input(arr,size);

    // sortElements(arr,size);
    // printf("Sorted array\n ");
    // for(int i=0; i<size; i++)
    // {
    //     printf("%d ",arr[i]);
    // }

    // int seconde=secondLargest(arr,size);
    // printf("second element is %d ",seconde);
    // return 0;

    // sortElementsDec(arr,size);
    // printf("Sorted array\n ");
    // for(int i=0; i<size; i++)
    // {
    //     printf("%d ",arr[i]);
    // }

    //copyArray(arr,size);

    int second= secondSmallest(arr,size);
    printf(" Second smallest element %d ",second);
}