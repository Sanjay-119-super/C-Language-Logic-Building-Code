#include <stdio.h>

/**
 * Function: convertStringToLowercase
 * Purpose: String ke har uppercase character ko lowercase mein convert karta hai.
 * Input: char string[] — original string
 * Working:
 *   - Har character check karta hai: agar 'A' to 'Z' range mein hai
 *   - Toh ASCII difference se use lowercase banata hai
 *   - Resulting string ko print karta hai
 * Use Case:
 *   - Case-insensitive comparison
 *   - Search bar normalization
 */
void convertStringToLowercase(char string[])
{
    for (int i = 0; string[i]; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] -= 'A' - 'a';
        }
    }
    printf("Converted String into lowercase: %s", string);
}

/**
 * Function: lengthOfString
 * Purpose: Ek string ka length nikalta hai bina built-in strlen ke.
 * Input: const char str[] — string whose length is to be calculated
 * Working:
 *   - Loop tab tak chalta hai jab tak '\0' null terminator nahi milta
 *   - Loop counter hi length batata hai
 * Return: int — string ka length (number of characters)
 */
int lengthOfString(const char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return i;
}

/**
 * Function: reverseString
 * Purpose: String ko ulta (reverse) order mein print karta hai.
 * Input: char string[] — original string
 * Working:
 *   - Length find karne ke baad reverse loop chalata hai
 *   - Characters ko right-to-left order mein print karta hai
 * Use Case:
 *   - Palindrome check
 *   - Text formatting
 */
void reverseString(char string[])
{
    int l = lengthOfString(string);
    for (int i = l - 1; i >= 0; i--)
    {
        printf("%c ", string[i]);
    }
}

/**
 * Function: countAlphabetDigitSpecialCharacter
 * Purpose: String mein total alphabets, digits, aur special characters count karta hai.
 * Input: char string[] — user provided string
 * Working:
 *   - Har character ke ASCII value ke basis par type identify karta hai
 *   - Alphabet (A-Z, a-z), Digit (0-9), ya Special (kuch aur)
 * Output: Print karta hai total counts of each type
 * Use Case:
 *   - Input validation
 *   - Password analysis
 */
void countAlphabetDigitSpecialCharacter(char string[])
{
    int Alphabetcount = 0;
    int digitCount = 0;
    int specialCharacterCount = 0;
    int l = lengthOfString(string);

    for (int i = 0; i < l; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z')
        {
            Alphabetcount++;
        }
        else if (string[i] >= '0' && string[i] <= '9')
        {
            digitCount++;
        }
        else
        {
            specialCharacterCount++;
        }
    }

    printf("Total number of alphabet: %d \n", Alphabetcount);
    printf("Total number of digits: %d \n", digitCount);
    printf("Total number of special characters : %d \n", specialCharacterCount);
}

/**
 * Function: copyStringToAnotherString
 * Purpose: Ek string ko dusri temporary string mein copy karta hai aur dono ko print karta hai.
 * Input: char string[] — string to be copied
 * Working:
 *   - Length calculate karta hai
 *   - For loop se character-by-character copy karta hai
 *   - Dono strings ko print karta hai for verification
 * Use Case:
 *   - Backup ya undo feature
 *   - Data handling
 */
void copyStringToAnotherString(char string[])
{
    int l = lengthOfString(string);
    char temp[l];

    printf("Before copied string: ");
    for (int i = 0; i < l; i++)
    {
        printf("%c", string[i]);
        temp[i] = string[i];
    }

    printf("\nAfter copied string: ");
    for (int i = 0; i < l; i++)
        printf("%c", temp[i]);
}

/**
 * Function: findFirstOccurence
 * Purpose: Sabse pehle repeat hone wale character ka first index return karta hai.
 * Input: char string[] — string to be analyzed
 * Working:
 *   - Har character ka repeat check karta hai
 *   - Jiska repeat sabse pehle aata hai uska first index return karta hai
 * Return: int — first occurrence index of earliest repeating character
 * Use Case:
 *   - Duplicate detection
 *   - Pattern finding
 */
int findFirstOccurence(char string[])
{
    int l = lengthOfString(string);
    int minRepeatIndex = l;
    int resultIndex = -1;

    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (string[i] == string[j])
            {
                if (j < minRepeatIndex)
                {
                    minRepeatIndex = j;
                    resultIndex = i;
                }
                break;
            }
        }
    }

    return resultIndex;
}

/**
 * Function: main
 * Purpose: Testing ground for above functions.
 * Working:
 *   - Uncomment karke har function ko test kiya ja sakta hai
 * Note:
 *   - Function calls are commented to avoid clutter — enable as needed
 */
int main()
{
    char str[] = "SANJAY BHAI";

    /*
     * convertStringToLowercase(str);
     * reverseString(str);
     *
     * char string[] = "Ab9@#";
     * countAlphabetDigitSpecialCharacter(string);
     *
     * copyStringToAnotherString(str);
     *
     * char test[] = "ACBBCC";
     * int res = findFirstOccurence(test);
     * printf("First Occurrence: %d", res);
     */

        return 0;
}
