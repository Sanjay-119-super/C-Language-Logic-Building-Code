#include <stdio.h>

/// 🔄 Swap two integers using pointers
/// Yeh function values ko directly memory ke through swap karta hai
void swap(int *x, int *y)
{
    int temp = *x; // x ki value temp mein daal do
    *x = *y;       // y ki value x mein copy kar do
    *y = temp;     // temp (original x) ko y mein copy kar do
}

/// 🔍 Search all occurrences of a character inside a string
/// Jo indexes pe character milta hai, unko array mein store karte hain
void search_all_occurence(char *str, char ch, int *arr)
{
    int count = 0, i;

    // har character check karo jab tak null character na mile
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            arr[count++] = i; // agar match ho, toh uska index store kar lo
        }
    }

    // Print all found positions
    for (i = 0; i < count; i++)
    {
        printf("Index at: %d → Character occurrence: %c\n", arr[i], ch);
    }

    printf("\n"); // line break for clean output
}

/// 🔠 Convert lowercase letters to uppercase using ASCII logic
void convertToUpperCase(char *str)
{
    char *ptr = str; // pointer banaya jo string ke start pe point kare

    // jab tak pointer null character tak na pahuch jaaye
    while (*ptr)
    {
        // agar current character lowercase hai
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr = *ptr - 32; // ASCII mein 32 kam karke uppercase milta hai
        }
        ptr++; // pointer ko agla character dikhane bhejo
    }

    printf("Uppercase → %s\n", str); // print final result
}

/// 🔡 Convert uppercase letters to lowercase using ASCII logic
void convertToLowerCase(char *str)
{
    char *ptr = str;

    while (*ptr)
    {
        if (*ptr >= 'A' && *ptr <= 'Z')
        {
            *ptr = *ptr + 32; // ASCII mein 32 add karke lowercase milta hai
        }
        ptr++;
    }

    printf("Lowercase → %s\n", str); // print final result
}

/// ✂️ Extract substring from start_index to end_index
void subtring(char *str, int start_index, int end_index, char *result)
{
    char *p = result; // result ke pointer pe kaam karega

    // substring ke range mein loop chala ke characters copy karo
    for (int i = start_index; i <= end_index; i++)
    {
        *p = str[i]; // original string se character copy karo
        p++;         // result pointer ko agla position pe le jao
    }

    *p = '\0'; // string end mark lagana zaruri hai
    printf("Extracted Substring → %s\n", result);
}

/// 🎯 Main function testing all utilities
int main()
{
    /// 🔄 Swap test
    int a = 20, b = 10;
    printf("Before Swap → a: %d, b: %d\n", a, b);
    swap(&a, &b); // values ko memory se swap karenge
    printf("After Swap  → a: %d, b: %d\n\n", a, b);

    /// 🔍 Search test
    char searchStr[] = "Sanjay Kumar";
    char targetChar = 'a';
    int positions[50]; // enough space for positions

    printf("Searching character '%c' in \"%s\"\n", targetChar, searchStr);
    search_all_occurence(searchStr, targetChar, positions);

    /// 🔠 Convert to Uppercase test
    char lowerStr[] = "apple";
    printf("Original String → %s\n", lowerStr);
    convertToUpperCase(lowerStr);

    /// 🔡 Convert to Lowercase test
    char upperStr[] = "APPLE";
    printf("Original String → %s\n", upperStr);
    convertToLowerCase(upperStr);

    /// ✂️ Substring extraction test
    char mainStr[] = "java";
    int s = 0, e = 3; // indexes for substring
    char result[50];

    printf("Substring from \"%s\" index [%d–%d]: ", mainStr, s, e);
    subtring(mainStr, s, e, result);

    return 0; // program successful
}
