#include <stdio.h>
#include <string.h>

/*
   
    Date      : 10-Jul-2025
    Description:
        Ye file kuch common operations perform karne wale functions contain karti hai:
        - String ki length nikalna
        - Kisi character ki occurrence count karna
        - String mein vowels count aur display
        - Space count karna
        - String ko uppercase mein convert karna

    Note:
        - Sabhi functions null-terminated C-strings ke liye kaam karte hain
        - Input buffers size safe rakhe gaye hain to avoid overflow
*/

/*
    Function   : lengthOfString
    Purpose    : Null-terminated C-string ki length (characters count) return karta hai
    Parameters :
        - const char str[] : Input string jiska length nikalna hai
    Returns    :
        - int : Number of characters excluding '\0'
    Use Case   :
        - User input validation, buffer handling, string truncation checks
*/
int lengthOfString(const char str[])
{
    int i;
    // Loop tab tak chalega jab tak null character '\0' na mile
    for (i = 0; str[i] != '\0'; i++);
    return i;
}

/*
    Function   : countOccurrence
    Purpose    : String mein given character ch[] ke hi positions match karega
    Parameters :
        - const char str[] : Input string jisme search karna hai
        - const char ch[]  : Target characters array (e.g., "A" ya single char as string)
    Returns    :
        - int : Number of matching positions where str[i] == ch[i]
    Note       :
        - Ye function exact index match count karta hai, char occurrence nahi.
        - Real world mein seldom use: alignment check, pattern verify
*/
int countOccurrence(const char str[], const char ch[])
{
    int count = 0;
    // Loop over string until '\0'
    for (int i = 0; str[i] != '\0'; i++)
    {
        // Agar dono arrays ke same index par same char hai, count++
        if (str[i] == ch[i])
        {
            count++;
        }
    }
    return count;
}

/*
    Function   : countVowels
    Purpose    : String mein sabhi vowels (ch[] list) ki total occurrences print karta hai
    Parameters :
        - const char str[]  : Input string jisme vowels count karne hain
        - const char ch[]   : Vowels list, e.g., "AEIOUaeiou"
    Logic      :
        - Outer loop ch[] par chalega: har ek vowel
        - Inner loop str[] par chalega: matching positions count karega
        - Har vowel aur uska count formatted print karega
    Use Case   :
        - Text analysis, grammar check, speech processing
*/
void countVowels(const char str[], const char ch[])
{
    // Iterate over each vowel in ch[]
    for (int j = 0; ch[j] != '\0'; j++)
    {
        int count = 0;
        char vowel = ch[j];
        // Check entire string for this vowel
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == vowel)
            {
                count++;
            }
        }
        // Print format: A -> 3
        printf("%c -> %d\n", vowel, count);
    }
}

/*
    Function   : countSpace
    Purpose    : String mein kitni spaces (' ') hain, wo return karta hai
    Parameters :
        - const char str[] : Input string jisme space count karna hai
    Returns    :
        - int : Total number of space characters
    Use Case   :
        - Word count calculation, formatting checks, input validation
*/
int countSpace(const char str[])
{
    int count = 0;
    // Loop through string till '\0'
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

/*
    Function   : convertUppercase
    Purpose    : String ke lowercase letters ko uppercase mein convert karta hai in-place
    Parameters :
        - char str[] : Input-output buffer jise modify karna hai
    Side Effect: str[] modify hojati hai, aur uppercase string print hojati hai
    Use Case   :
        - Case normalization, user input sanitization, protocol formatting
*/
void convertUppercase(char str[])
{
    // Loop through each character
    for (int i = 0; str[i] != '\0'; i++)
    {
        // Agar lowercase range mein hai, 32 subtract karke uppercase banao
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= ('a' - 'A'); // ASCII difference: 32
        }
    }
    // Print formatted result
    printf("Uppercase -> %s\n", str);
}

int main()
{
    // Input string example: extra spaces included
    char str[100] = "Sanjay Kumar  ";
    // Vowels list for countVowels
    char vowels[]   = "AEIOUaeiou";

    // Function calls: uncomment as needed
    
    // 1) Length of string
    // int len = lengthOfString(str);
    // printf("Length = %d\n", len);

    // 2) Exact index occurrence (rare)
    // int occ = countOccurrence(str, "San");
    // printf("Exact index matches = %d\n", occ);

    // 3) Vowel occurrences per vowel
    countVowels(str, vowels);

    // 4) Space count
    int spaces = countSpace(str);
    printf("Total spaces = %d\n", spaces);

    // 5) Convert to uppercase
    convertUppercase(str);

    return 0;
}
