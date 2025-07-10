#include <stdio.h>

/*
    Function: swapArrayElement
    Purpose: Array ke do specific index ke elements ko swap karna
    Parameters:
        nums[]   - original array
        size     - array ka size
        index1   - pehla index jiska element swap karna hai
        index2   - doosra index jiska element swap karna hai
    Internal Logic:
        - Pehle check karte hain dono index valid hain ya nahi
        - Phir swapping karte hain using temp variable
    Real World Use:
        - Sorting ke andar swapping kaafi common operation hai
        - UI layout repositioning (drag-drop type UI)
*/
void swapArrayElement(int nums[], int size, int index1, int index2)
{
    if (index1 < size && index2 < size)
    {
        int temp = nums[index1];
        nums[index1] = nums[index2];
        nums[index2] = temp;
    }

    // Swapping ke baad array print kar rahe hain
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

/*
    Function: countDuplicate
    Purpose: Unique duplicate elements kitne hain uska count nikalna
    Parameters:
        nums[] - input array
        size   - array ka size
    Logic:
        - visited[] ka use karke track karte hain already count hua ya nahi
        - har element ke liye check karte hain kya woh duplicate hai
    Use Case:
        - Data duplication checking in lists, files, log entries etc.
*/
int countDuplicate(int nums[], int size)
{
    int count = 0;
    int visited[size];

    // Initially sabko 0 mark karo (visited nahi hai)
    for (int i = 0; i < size; i++)
        visited[i] = 0;

    for (int i = 0; i < size; i++)
    {
        if (visited[i] == 1)
            continue;

        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
                visited[j] = 1; // Duplicate ko mark karo
                break;
            }
        }
    }
    return count;
}

/*
    Function: printUnique
    Purpose: Array ke unique (non-repeating) elements print karna
    Logic:
        - frequency[] array bana ke count karte hain
        - Jiska frequency 1 hai woh unique hai
    Use Case:
        - Detecting unique products, IPs, IDs in data logs
*/
void printUnique(int nums[], int size)
{
    int frequency[size];

    for (int i = 0; i < size; i++)
        frequency[i] = 0;

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        frequency[i] = count;
    }

    for (int i = 0; i < size; i++)
    {
        if (frequency[i] == 1)
            printf("%d ", nums[i]);
    }
    printf("\n");
}

/*
    Function: mergeArray
    Purpose: Do arrays ko merge karke ek single array banate hain
    Logic:
        - nums1 ke elements ko directly copy karo merged mein
        - fir nums2 ke elements ko copy karo
    Use Case:
        - Combining two datasets (logs, user inputs, tables, etc.)
*/
void mergeArray(int nums1[], int nums2[], int size, int merged[])
{
    for (int i = 0; i < size; i++)
    {
        merged[i] = nums1[i];
    }

    for (int j = 0; j < size; j++)
    {
        merged[size + j] = nums2[j];
    }

    for (int i = 0; i < size * 2; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
}

/*
    Function: countFrequency
    Purpose: Har unique element kitni baar aaya woh print karna
    Logic:
        - visited[] ka use karke bar bar same element na count ho
        - count variable se frequency nikalte hain
    Use Case:
        - Analytics (kitna frequently koi data repeat hua)
        - Inventory systems
*/
void countFrequency(int nums[], int size)
{
    int visited[size];

    for (int i = 0; i < size; i++)
        visited[i] = 0;

    for (int i = 0; i < size; i++)
    {
        if (visited[i] == 1)
            continue;

        int count = 1;

        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        visited[i] = 1;
        printf("%d -> %d times\n", nums[i], count);
    }
}

/*
    MAIN FUNCTION: Yahan pe saare functions test kar rahe hain
*/
int main()
{
    // Test Case 1: countFrequency
    int nums1[] = {1, 2, 2, 3, 3};
    int size1 = 5;
    printf("Test Case 1: Frequency of each element\n");
    countFrequency(nums1, size1);

    // Test Case 2: countDuplicate
    int nums2[] = {4, 5, 4, 6, 7, 5};
    int size2 = 6;
    printf("\nTest Case 2: Count duplicates\n");
    printf("Total Duplicates: %d\n", countDuplicate(nums2, size2));

    // Test Case 3: printUnique
    int nums3[] = {10, 20, 10, 30, 40, 40};
    int size3 = 6;
    printf("\nTest Case 3: Print Unique Elements\n");
    printUnique(nums3, size3);

    // Test Case 4: mergeArray
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int merged[6];
    printf("\nTest Case 4: Merge Arrays\n");
    mergeArray(a, b, 3, merged);

    // Test Case 5: swapArrayElement
    int nums4[] = {11, 22, 33, 44, 55};
    int size4 = 5;
    int i1 = 1, i2 = 3;
    printf("\nTest Case 5: Swap index 1 and 3\n");
    swapArrayElement(nums4, size4, i1, i2);

    return 0;
}
