#include <string.h>
#include <stdio.h>

#define MAX_WORDS 100 // Ek string me maximum kitne words honge
#define MAX_LEN 100   // Har word ka maximum length

/*
 --------------------------------------------------------
 Function: checkPalindromicString
 Purpose: Check karta hai ki given string palindrome hai ya nahi
 Palindrome: Wahi string jo ulta padho ya seedha — same ho
 Examples: "madam", "level", "noon"
 --------------------------------------------------------
*/
int checkPalindromicString(char string[])
{
    int len = strlen(string);

    // Agar string empty ya ek character ka hai to palindrome hi hoga
    if (len <= 1)
        return 1;

    // Seedha aur ulta character ek-ek karke compare karo
    for (int i = 0; i < len / 2; i++)
    {
        if (string[i] != string[len - 1 - i])
            return -1; // mismatch mila — not palindrome
    }

    return 1; // sab match hue — string palindrome hai
}

/*
 --------------------------------------------------------
 Function: trimString
 Purpose: String ke shuru aur end ke spaces hataata hai
 Logic:
   - start index: pehla non-space character
   - end index: last non-space character
   - beech ka content front me shift karke null-terminate karo
 Note: Beech ke multiple spaces ko yeh function nahi hataata
 --------------------------------------------------------
*/
void trimString(char string[])
{
    int len = strlen(string);
    int start = 0, end = len - 1;

    // Leading spaces skip karo
    while (start < len && string[start] == ' ')
        start++;

    // Trailing spaces skip karo
    while (end >= 0 && string[end] == ' ')
        end--;

    // Agar string sirf spaces se bhara ho
    if (start > end)
    {
        string[0] = '\0';
        return;
    }

    // Beech ka actual part front me shift karo
    int j = 0;
    for (int i = start; i <= end; i++)
    {
        string[j++] = string[i];
    }

    string[j] = '\0'; // terminate string
}

/*
 --------------------------------------------------------
 Function: countWord
 Purpose: String me space-separated words ko count karta hai
 Logic:
   - Agar non-space character ke pehle space mila toh word count++
   - Word count tabhi badhaya jata hai jab naye word ki shuruaat mile
 --------------------------------------------------------
*/
int countWord(char words[])
{
    int count = 0;
    int inWord = 0; // flag batata hai ki abhi word ke andar ho ya nahi

    for (int i = 0; words[i]; i++)
    {
        if (words[i] != ' ')
        {
            if (inWord == 0)
            {
                count++;    // naya word mila
                inWord = 1; // ab hum word me hain
            }
        }
        else
        {
            inWord = 0; // space mila, word khatam
        }
    }

    return (count > 0) ? count : -1;
}

/*
 --------------------------------------------------------
 Function: splitWords
 Purpose: String ko words me todta hai aur 2D array me store karta hai
 Logic:
   - Har character jab tak space na mile, current word me copy karo
   - Agar space mila aur word complete hua, terminate karke agla word start karo
 --------------------------------------------------------
*/
void splitWords(char s[], char words[][MAX_LEN])
{
    int w = 0; // word index
    int c = 0; // character index per word

    for (int i = 0; s[i]; i++)
    {
        if (s[i] != ' ')
        {
            words[w][c++] = s[i];
        }
        else if (c > 0)
        {
            words[w][c] = '\0'; // current word ko terminate karo
            w++;                // agla word me shift
            c = 0;
        }
    }

    if (c > 0)
        words[w][c] = '\0'; // last word ko terminate karo
}

/*
 --------------------------------------------------------
 Function: reverseWords
 Purpose: String ke words ko reverse order me print karta hai
 Example:
   Input  → "hello world from C"
   Output → "C from world hello"
 Logic:
   - Word count lo → split karo → reverse order me print karo
 --------------------------------------------------------
*/
void reverseWords(char s[])
{
    int wc = countWord(s);

    if (wc < 0)
    {
        printf("(no words)\n");
        return;
    }

    char arr[MAX_WORDS][MAX_LEN];
    splitWords(s, arr);

    // Words reverse order me print karo
    for (int i = wc - 1; i >= 0; i--)
    {
        printf("%s", arr[i]);
        if (i > 0)
            printf(" "); // Last word ke baad space na ho
    }

    printf("\n");
}

/*
 --------------------------------------------------------
 Function: caseSensitiveComparision
 Purpose: Case-sensitive matching karta hai
 Note:
   "Hello" ≠ "hello" → because ASCII values of 'H' and 'h' differ
 Return:
   1 → agar dono strings exactly match karte hain
  -1 → agar mismatch hota hai
 --------------------------------------------------------
*/
int caseSensitiveComparision(char test1[], char test2[])
{
    int i = 0;

    while (test1[i] != '\0' && test2[i] != '\0')
    {
        if (test1[i] != test2[i])
            return -1; // mismatch mila
        i++;
    }

    return (test1[i] == '\0' && test2[i] == '\0') ? 1 : -1;
}

/*
 --------------------------------------------------------
 Main Function
 Purpose: Sabhi helper functions ko test karne ke liye
 Instructions:
   - Comment/uncomment kar ke alag-alag functions run karke dekho
 --------------------------------------------------------
*/
int main()
{
    char input[] = "  hello world from C   ";
    char a[] = "Hello";
    char b[] = "hello";

    // Trim spaces from start and end
    trimString(input);
    printf("Trimmed: '%s'\n", input);

    // Check palindrome
    int pal = checkPalindromicString(input);
    printf("Palindrome: %s\n", (pal == 1) ? "Yes" : "No");

    // Word count
    int wc = countWord(input);
    printf("Total words: %d\n", wc);

    // Reverse word order
    printf("Reversed words: ");
    reverseWords(input);

    // Case-sensitive comparison
    int cmp = caseSensitiveComparision(a, b);
    printf("Case comparison: %s\n", (cmp == 1) ? "Equal" : "Not Equal");

    return 0;
}
