#include <stdio.h>  // Required for input/output functions like printf, fgets
#include <string.h> // Required for string-related functions: strlen, strcpy, strcmp

// ============================
// 🔹 INPUT FUNCTION
// Purpose: Reads 'n' strings from user and stores in 2D array str[][]
// ============================
void inputString(char str[][20], int n)
{
    int i, l;
    printf("Enter the strings:\n");

    for (i = 0; i < n; i++) // Loop for each string index: str[0], str[1], ...
    {
        fgets(str[i], 20, stdin); // Reads up to 19 characters including '\n'
        // Internally: fgets stops at newline or max size - 1

        l = strlen(str[i]); // Gets actual length of string including newline if present

        if (str[i][l - 1] == '\n') // Checks if last char is newline
        {
            // '\n' at end is replaced by '\0' → prevents unwanted extra line breaks in output
            str[i][l - 1] = '\0';
        }
        // NOTE: Without this cleanup, strcmp() and printf() behavior gets unpredictable due to hidden '\n'
    }
}

// ============================
// 🔹 VOWEL COUNT FUNCTION
// Purpose: Counts how many vowels are present in each string in str[][]
// ============================
void vowelCount(char str[][20], int n)
{
    int i, j, k, count;
    char vowels[] = "aeiouAEIOU"; // Full set of vowels (lowercase + uppercase)

    // inputString(str, n); // Calls inputString internally — not ideal from design view (tight coupling)

    for (i = 0; i < n; i++) // Loop over all strings
    {
        count = 0; // Reset for each string

        for (j = 0; str[i][j]; j++) // Loop over each character until null-terminator
        {
            for (k = 0; vowels[k]; k++) // Compare current character with each vowel
            {
                // If match found, increase count
                if (str[i][j] == vowels[k])
                    count++;
            }
        }

        // Prints count for that string
        printf("Vowels -> %s = %d\n", str[i], count);
    }
    // NOTE: Time complexity is O(n × m × 10), where:
    // n = number of strings, m = average string length, 10 = vowels[] size
}

// ============================
// 🔹 SORT FUNCTION
// Purpose: Sorts strings lexicographically (dictionary style)
// ============================
void sort(char str[][20], int n)
{
    int r, i;
    char temp[20]; // Temporary string to store one value during swap

    // Uses Bubble Sort → Not optimal for large datasets, but good for small n like 10
    for (r = 0; r < n - 1; r++) // Passes required: n - 1
    {
        for (i = 0; i < n - r - 1; i++) // Each pass compares adjacent pairs
        {
            // strcmp returns:
            //  < 0 if str[i] < str[i+1]
            //  = 0 if str[i] == str[i+1]
            //  > 0 if str[i] > str[i+1]

            if (strcmp(str[i], str[i + 1]) > 0)
            {
                // Swap str[i] and str[i+1]
                strcpy(temp, str[i]);
                strcpy(str[i], str[i + 1]);
                strcpy(str[i + 1], temp);
            }
        }
    }
    // NOTE: Bubble Sort is stable → maintains relative position of equal elements
}

// ============================
// 🔹 DISPLAY FUNCTION
// Purpose: Prints all strings, one per line
// ============================
void display(char str[][20], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]); // Each string printed directly
        // %s prints until '\0' → no need to use loop
    }
}

// ============================
// 🔹 TRIME FUNCTION (Trim leading/trailing spaces)
// Purpose: Cleans the string edges — removes unwanted whitespace
// ============================
char *trime(char str[])
{
    char temp[50]; // Buffer to hold cleaned string (should match max size of str[])
    int i;

    // Skip initial spaces → find index of first non-space character
    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ')
            break;
    }

    // Copy rest of string from first non-space
    if (str[i] != '\0')
    {
        strcpy(temp, str + i); // Copies from ith index till end
    }

    // Find string length of temp[]
    for (i = 0; temp[i]; i++)
        ;
    i--;

    // Remove trailing spaces using reverse loop
    while (temp[i] == ' ')
    {
        i--;
    }

    // Properly null terminate
    temp[i + 1] = '\0';

    // Copy trimmed version back into original str[]
    strcpy(str, temp);

    return str;
    // NOTE: Instead of returning new pointer, modifies input in-place
}

// ============================
// 🔹 COUNT WORD FUNCTION
// Purpose: Count total words in a single string
// ============================
int countWord(char str[])
{
    int i, count = 0;

    trime(str); // Clean leading/trailing spaces before logic

    for (i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
        {
            count++; // Each space indicates word separation
        }
    }

    return count + 1; // Words = spaces + 1 (if not empty)
}

// ============================
// 🔹 SPLIT TO STRING FUNCTION
// Purpose: Break a sentence into words, storing each in 2D array
// ============================
int splitToString(char str[], char s[][20], int n)
{
    int i, j = -1, k;
    int noOfWord = countWord(str); // Find actual word count

    if (noOfWord <= n) // Ensure storage capacity
    {
        for (i = 0; i < noOfWord; i++)
        {
            for (j++, k = 0; str[j] != ' ' && str[j] != '\0'; j++, k++)
            {
                s[i][k] = str[j]; // Copy characters till space or end
            }
            s[i][k] = '\0'; // Properly end each word
        }

        return noOfWord; // Return actual split count
    }
    // NOTE: This lacks else branch → silently fails if words > n
}

// ============================
// 🔹 REMOVE DUPLICATE FUNCTION
// Purpose: Removes repeated strings after sorting
// ============================
int remove_duplicate(char s[][20], int n)
{
    int i, j, k = 0;
    char temp[n][20]; // temp[] stores unique strings

    sort(s, n);            // Sorting makes duplicate detection easier
    strcpy(temp[k], s[0]); // First string is always unique

    for (i = 1; i < n; i++)
    {
        if (strcmp(s[i], temp[k]) != 0) // Only copy if not same
        {
            k++;
            strcpy(temp[k], s[i]);
        }
    }

    // Copy back final list of unique strings
    for (i = 0; i <= k; i++)
    {
        strcpy(s[i], temp[i]);
    }

    return k + 1; // Total number of unique strings
}

// ============================
// 🔸 MAIN FUNCTION — Program entry point
// ============================
int main()
{
    char str[10][20]; // Holds 10 strings of max 19 chars each

    // Step 1: Input strings from user
    inputString(str, 10);

    // Step 2: Sort strings alphabetically
    sort(str, 10);

    // Step 3: Display sorted list
    printf("\n🔹 Sorted Strings:\n");
    display(str, 10);

    // Step 4: Show vowel count for each string
    printf("\n🔹 Vowel Count:\n");
    vowelCount(str, 10);

    // Step 5: Remove duplicates and display unique list
    int newCount = remove_duplicate(str, 10);
    printf("\n🔹 Unique Strings:\n");
    display(str, newCount);

    return 0;
}
