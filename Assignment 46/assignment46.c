#include <stdio.h>
#include <stdlib.h>

// ✅ Sabhi functions ko pehle define ya declare karna padega
char *inputString();
void f2();
void f3();
int *merge(int A[], int n1, int B[], int n2);

// ===================================================
// Function 1: inputString - Dynamic length string input
// ===================================================
char *inputString()
{
    char *str;
    int length;

    // Step 1: User se length lena
    printf("Enter length of string: ");
    scanf("%d", &length);
    getchar(); // clear input buffer after scanf

    // Step 2: Dynamic memory allocation
    str = (char *)malloc((length + 1) * sizeof(char)); // +1 for '\0'

    if (str == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Step 3: String input
    printf("Enter the string: ");
    fgets(str, length + 1, stdin); // Read exact length + \0

    return str;
}

// ===================================================
// Function 2: f2 - Take n numbers, calculate average
// ===================================================
void f2()
{
    int *arr, n, sum = 0;
    float avg;

    printf("How many numbers to input for Average? ");
    scanf("%d", &n);

    // Memory allocation using calloc (auto 0 initialization)
    arr = (int *)calloc(n, sizeof(int));

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Average of numbers: %.2f\n", avg);

    free(arr); // Free memory
}

// ===================================================
// Function 3: f3 - Take n numbers, calculate sum
// ===================================================
void f3()
{
    int *arr, n, sum = 0;

    printf("How many numbers to input for Sum? ");
    scanf("%d", &n);

    // Memory allocation using malloc
    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of numbers: %d\n", sum);

    free(arr);
}

// ===================================================
// Function 4: merge - Merge two sorted arrays
// ===================================================
int *merge(int A[], int n1, int B[], int n2)
{
    int *mergedArr;
    int i = 0, j = 0, k = 0;

    // Allocate memory for merged array
    mergedArr = (int *)malloc((n1 + n2) * sizeof(int));

    // Merge both arrays
    while (i < n1 && j < n2)
    {
        if (A[i] < B[j])
            mergedArr[k++] = A[i++];
        else
            mergedArr[k++] = B[j++];
    }

    // Remaining elements of A
    while (i < n1)
        mergedArr[k++] = A[i++];

    // Remaining elements of B
    while (j < n2)
        mergedArr[k++] = B[j++];

    return mergedArr;
}

// ===================================================
// Main Function: Testing all functions step by step
// ===================================================

int main()
{
    int choice;
    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Input String\n");
        printf("2. Calculate Average (f2)\n");
        printf("3. Calculate Sum (f3)\n");
        printf("4. Merge Two Arrays\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // buffer clear

        switch (choice)
        {
        case 1:
        {
            printf("\n==== STRING INPUT ====\n");
            char *myString = inputString();
            printf("You entered: %s\n", myString);
            free(myString);
            break;
        }
        case 2:
        {
            printf("\n==== AVERAGE FUNCTION ====\n");
            f2();
            break;
        }
        case 3:
        {
            printf("\n==== SUM FUNCTION ====\n");
            f3();
            break;
        }
        case 4:
        {
            printf("\n==== MERGE TWO ARRAYS ====\n");
            int A[] = {1, 3, 5};
            int B[] = {2, 4, 6, 8};
            int n1 = sizeof(A) / sizeof(A[0]);
            int n2 = sizeof(B) / sizeof(B[0]);

            int *mergedArray = merge(A, n1, B, n2);
            printf("Merged Sorted Array: ");
            for (int i = 0; i < n1 + n2; i++)
            {
                printf("%d ", mergedArray[i]);
            }
            printf("\n");

            free(mergedArray);
            break;
        }
        case 5:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
