#include <stdio.h>

/// 🔄 Swap two string pointers using double pointer
/// Yeh actual pointer address swap karta hai — dono variables ke address exchange hote hain
void swap(char **s1, char **s2)
{
    char *temp = *s1; // store pehla string ka pointer
    *s1 = *s2;        // s1 ko s2 ka address diya
    *s2 = temp;       // s2 ko temp (original s1) ka address diya
}

/// 📊 Sort an integer array using Bubble Sort
/// Yeh inefficient but easy-to-understand sorting hai — great for small arrays
void sort(int *ptr, int size)
{
    int r, i, t;

    // Outer loop for passes
    for (r = 1; r < size; r++)
    {
        // Inner loop for comparing adjacent elements
        for (i = 0; i <= size - 1 - r; i++)
        {
            if (ptr[i] > ptr[i + 1]) // agar left value bada hai toh swap
            {
                t = ptr[i];
                ptr[i] = ptr[i + 1];
                ptr[i + 1] = t;
            }
        }
    }
}

/// 🔗 Merge two sorted arrays into a third sorted array
/// Yeh two-pointer technique ka use karta hai for efficient merging
void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
    int i = 0, j = 0, k = 0;

    // Jab tak dono arrays mein elements ho
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    // Agar first array mein elements bache ho
    while (i < size1)
        arr3[k++] = arr1[i++];

    // Agar second array mein elements bache ho
    while (j < size2)
        arr3[k++] = arr2[j++];
}

/// ⚡ Partition function like QuickSort — places pivot correctly
/// Left-right scanning logic se pivot ka placement hota hai
int f4(int A[], int size)
{
    int left = 0, right = size - 1;
    int loc = 0, temp;

    while (left < right)
    {
        while (left < right && A[loc] < A[right])
            right--;

        if (left == right)
            break;

        // Swap loc and right
        temp = A[right];
        A[right] = A[loc];
        A[loc] = temp;
        loc = right;

        while (left < right && A[left] < A[loc])
            left++;

        if (left == right)
            break;

        // Swap loc and left
        temp = A[left];
        A[left] = A[loc];
        A[loc] = temp;
        loc = left;
    }

    return loc; // Pivot ka final location
}

/// 🏫 Find highest marks among multiple classes with different student counts
/// p[i][j] se individual marks access hote hain, num_of_students[i] batata hai har class ka size
int highestMarks(int **p, int no_of_classes, int num_of_students[])
{
    int max = p[0][0]; // start with first student’s marks

    for (int i = 0; i < no_of_classes; i++)
    {
        for (int j = 0; j < num_of_students[i]; j++)
        {
            if (max < p[i][j])
                max = p[i][j]; // update max if current student has more marks
        }
    }

    return max;
}

int main()
{
    /// 🔄 String Swap Test
    char s1[] = "apple";
    char s2[] = "cool";
    char *p1 = s1;
    char *p2 = s2;

    printf("Before swap: %s %s\n", p1, p2);
    swap(&p1, &p2);
    printf("After swap: %s %s\n\n", p1, p2);

    /// 📊 Array Sort Test
    int arr[] = {9, 5, 1, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before sort: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    sort(arr, size);
    printf("After sort: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    /// 🔗 Merge Arrays Test
    int a1[] = {1, 3, 5};
    int a2[] = {2, 4, 6, 7};
    int merged[7];
    merge(a1, 3, a2, 4, merged);

    printf("Merged array: ");
    for (int i = 0; i < 7; i++)
        printf("%d ", merged[i]);
    printf("\n\n");

    /// ⚡ Partition Function Test
    int pivotArray[] = {6, 2, 7, 5, 9, 1};
    int pivotLoc = f4(pivotArray, 6);
    printf("Pivot placed at index: %d\n", pivotLoc);
    printf("Array after partition: ");
    for (int i = 0; i < 6; i++)
        printf("%d ", pivotArray[i]);
    printf("\n\n");

    /// 🏫 Highest Marks Test — Dynamic Simulation
    int cls1[] = {80, 90};
    int cls2[] = {78, 85, 88};
    int cls3[] = {60, 99, 75, 82};

    int *classes[] = {cls1, cls2, cls3}; // Array of int pointers
    int num_of_students[] = {2, 3, 4};

    int highest = highestMarks(classes, 3, num_of_students);
    printf("Highest marks: %d\n", highest);

    return 0;
}
