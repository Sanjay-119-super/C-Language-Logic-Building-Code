
#include <stdio.h>
#include <string.h>

/**
 * Function: trim
 * Purpose: Leading aur trailing spaces ko remove karta hai
 * Internal Working:
 * - start index ko left se aage badhate hain jab tak space milta hai
 * - end index ko right se peeche le jaate hain jab tak space milta hai
 * - in dono indexes ke beech wale actual string ko naya temp mein copy karte hain
 * - temp ko '\0' se terminate kar ke original str mein copy kar dete hain
 * Return: Trimmed string by reference (original str update hota hai)
 */
char *trim(char str[])
{
    int start = 0, end = strlen(str) - 1;
    while (str[start] == ' ')
        start++;
    while (str[end] == ' ')
        end--;

    int j = 0;
    char temp[100];
    for (int i = start; i <= end; i++)
        temp[j++] = str[i];
    temp[j] = '\0';
    strcpy(str, temp);
    return str;
}

/**
 * Function: splitToWord
 * Purpose: Ek sentence ko alag-alag words mein todna
 * Internal Working:
 * - ek hi string ke characters ko loop karte hain
 * - jab space milta hai toh ek word complete samajh ke null-terminate karte hain
 * - word complete hone ke baad next row (i.e., next word) pe switch kar jaate hain
 * - finally total number of words return karte hain
 * Note: Agar sentence space se end hota hai toh last word ko bhi handle karte hain
 */
int splitToWord(char str[], char sentence[][50], int n)
{
    int i = 0, row = 0, col = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
            sentence[row][col++] = str[i];
        else if (col > 0)
        {
            sentence[row][col] = '\0';
            row++;
            col = 0;
            if (row >= n)
                break;
        }
        i++;
    }
    if (col > 0 && row < n)
    {
        sentence[row][col] = '\0';
        row++;
    }
    return row;
}

/**
 * Function: findCharacterS
 * Purpose: Aise words dhoondna jo 's' se end hote hain
 * Internal Working:
 * - pehle string trim karte hain taaki extra spaces ka issue na ho
 * - splitToWord se string ko words mein todte hain
 * - har word ke last character ko check karte hain agar wo 's' hai
 * - agar match hota hai toh use result array mein store karte hain
 * - last mein un words ko print kar dete hain
 */
void findCharacterS()
{
    char str[] = "This is a students";
    char storeSWords[20][20];    // s-end words
    char storeAllWords[100][50]; // all words
    int i, j = 0;
    trim(str);
    int numberOfWords = splitToWord(str, storeAllWords, 100);
    for (i = 0; i < numberOfWords; i++)
    {
        int len = strlen(storeAllWords[i]);
        if (len > 0 && storeAllWords[i][len - 1] == 's')
            strcpy(storeSWords[j++], storeAllWords[i]);
    }
    for (i = 0; i < j; i++)
        printf("%s ", storeSWords[i]);
    printf("\n");
}

/**
 * Function: findMostRepeatedChar
 * Purpose: Sabse zyada baar repeat hone wala character ko find karna
 * Internal Working:
 * - ek frequency array banate hain (256 size for ASCII)
 * - har character ke repetition ko count karte hain (case-sensitive)
 * - fir frequency array mein max value find karte hain
 * - jiska freq sabse zyada hota hai, wo character return karte hain
 */
char findMostRepeatedChar(char str[][20], int n)
{
    int freq[256] = {0}; // har ASCII char ke liye counter
    int i, j, max = 0;
    char ch = 0;
    for (i = 0; i < n; i++)
        for (j = 0; str[i][j]; j++)
            freq[(unsigned char)str[i][j]]++;

    for (i = 0; i < 256; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            ch = i;
        }
    }
    return ch;
}

/**
 * Function: isAnagram
 * Purpose: Check karta hai ki do strings ek dusre ke anagram hain ya nahi
 * Internal Working:
 * - dono strings ke char count store karte hain 256 size ke freq array mein
 * - agar dono array ki frequency match hoti hai, toh wo anagram hain
 * - case-sensitive hai; space ya punctuation bhi count hota hai
 */
int isAnagram(char s1[], char s2[])
{
    int f1[256] = {0}, f2[256] = {0}, i;
    for (i = 0; s1[i]; i++)
        f1[(unsigned char)s1[i]]++;
    for (i = 0; s2[i]; i++)
        f2[(unsigned char)s2[i]]++;
    for (i = 0; i < 256; i++)
        if (f1[i] != f2[i])
            return 0;
    return 1;
}

/**
 * Function: findCharacterA
 * Purpose: Wo words print karta hai jo 's' se start hote hain
 * Internal Working:
 * - trimmed string ko words mein split karte hain
 * - har word ka first character check karte hain agar wo 's' hai
 * - matched word ko result mein store karke print kar dete hain
 */
void findCharacterA()
{
    char str[] = "This is a students";
    char storeSWords[20][20], storeAllWords[100][50];
    int i, j = 0;
    trim(str);
    int numberOfWords = splitToWord(str, storeAllWords, 100);
    for (i = 0; i < numberOfWords; i++)
        if (storeAllWords[i][0] == 'a')
            strcpy(storeSWords[j++], storeAllWords[i]);
    for (i = 0; i < j; i++)
        printf("%s ", storeSWords[i]);
    printf("\n");
}

/**
 * Function: countGmain
 * Purpose: Total emails count karta hai jo '@gmail.com' se end hote hain
 * Internal Working:
 * - har string ke length ke last 10 characters compare karta hai '@gmail.com' se
 * - agar exact match hota hai toh count badhate hain
 * Note: email format ka validation nahi karta, sirf suffix check karta hai
 */
int countGmain(char s[][50], int n)
{
    char text[] = "@gmail.com";
    int i, j, k, count = 0;
    for (i = 0; i < n; i++)
    {
        int len = strlen(s[i]);
        if (len >= strlen(text))
        {
            for (j = len - strlen(text), k = 0; k < strlen(text); j++, k++)
            {
                if (s[i][j] != text[k])
                    break;
            }
            if (k == strlen(text))
                count++;
        }
    }
    return count;
}

/**
 * Function: main
 * Purpose: Sabhi functions ko call karke test karna
 * Internal Working:
 * - fixed strings aur arrays ke sath testing ki gayi hai
 * - output ke through function ka result verify hota hai
 */
int main()
{
    printf("Words ending with 's':\n");
    findCharacterS(); // "students" expected output

    printf("Words starting with 'a':\n");
    findCharacterA(); // "students" expected output

    // Test for most repeated character
    char sample[][20] = {"students", "skills", "success", "steps"};
    int wordCount = sizeof(sample) / sizeof(sample[0]);
    char mostRepeated = findMostRepeatedChar(sample, wordCount);
    printf("Most repeated character: %c\n", mostRepeated); // likely 's'

    // Gmail count test
    char emailList[][50] = {"test@gmail.com", "admin@yahoo.com", "xyz@gmail.com"};
    int gmailCount = countGmain(emailList, 3);
    printf("Total Gmail addresses: %d\n", gmailCount); // should be 2

    // Anagram test
    char a[] = "listen", b[] = "silent";
    printf("Are '%s' and '%s' anagrams? %s\n", a, b, isAnagram(a, b) ? "Yes" : "No");

    char c[] = "hello", d[] = "world";
    printf("Are '%s' and '%s' anagrams? %s\n", c, d, isAnagram(c, d) ? "Yes" : "No");

    return 0;
}
