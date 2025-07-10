#include<stdio.h>
void swapArrayElement(int nums[], int size, int index1, int index2)
{
        if(index1<size && index2<size)
        {
            int temp=nums[index1];
            nums[index1]=nums[index2];
            nums[index2]=temp;
        }
        for(int i=0; i<size; i++)
        {
            printf("%d ",nums[i]);
        }
}
int countDuplicate(int nums[], int size)
{
    int count=0;
    int visited[size];

    for(int i=0; i<size; i++)
        visited[i]=0;

    for(int i=0; i<size; i++)
    {
        if(visited[i]==1)
         continue;
       for(int j=i+1; j<size; j++)
       {
        if(nums[i]==nums[j])
        {
            count++;
            visited[j]=1;
            break;
        }
       }
       
    }
   return count;
}
void printUnique(int nums[], int size)
{
    int frequency[size];
    
    for(int i=0; i<size; i++)
    {
        
        frequency[i]=0;
    }
    for(int i=0; i<size; i++)
    {
       int count=0;
        for(int j=0; j<size; j++)
        {
            if( nums[i]==nums[j])
            {
                count++;

            }
        }
        frequency[i]=count;

    }
    for(int i=0; i<size; i++)
    {
        if(frequency[i]==1)
         printf("%d ",nums[i]);
    }
    
}
void mergeArray(int nums1[], int nums2[] ,int size, int merged[])
{
    for(int i=0; i<size; i++)
    {
        merged[i]=nums1[i];

    }

    for(int j=0; j<size; j++)
    {
        merged[size+j]=nums2[j];
    }
    for(int i=0; i<size*2; i++)
    {
        printf("%d ",merged[i]);
    }
    
}
void countFrequency(int nums[], int size)
{
    int visited[size];
    
    for(int i=0; i<size; i++)
    {
        visited[i]=0;
    }
    for(int i=0; i<size; i++)
    {
        if(visited[i]==1)
         continue;

        int count=1; 
         for(int j=i+1; j<size; j++)
         {
            if(nums[i]==nums[j])
            {
                count++;
                visited[j]=1;
                
            }
         }
        visited[i]=1;
         printf("%d-> %d times\n" , nums[i], count);
    }
}


int main()
 {
//     int size=7;
//     int arr[] = {10, 20, 10, 30, 20, 40, 50};
     // int index1=0;
    // int index2=4;
    // swapArrayElement(arr,size,index1,index2);

    // int count=countDuplicate(arr,size);
    // printf("Total Duplicate elements: %d",count);

   // printUnique(arr,size);

//    int size=3;

//   int nums1[] = {1, 2, 3};
//   int nums2[] = {4, 5, 6};

//   int merge[size*2];
//   mergeArray(nums1,nums2,size,merge);
int size=5;
int nums[] = {1, 2, 2, 3,3};

countFrequency(nums,size);

    return 0;
}