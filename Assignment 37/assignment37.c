#include <stdio.h>
#include <string.h>

/*
 * string[startIndex..endIndex] me ch (character) dhundta hai.
 * Agar ch milta hai to 1 return karega, warna -1.
 * Invalid indices par bhi -1 return hota hai.
 */
int findCharacterBetweenTwoIndices(char string[], int startIndex, int endIndex, char ch)
{
    int len = strlen(string);
    if (startIndex < 0 || endIndex < startIndex || endIndex >= len)
    {
        // agar index range galat hai
        return -1;
    }

    for (int i = startIndex; i <= endIndex; i++)
    {
        if (string[i] == ch)
        {
            return 1;
        }
    }
    return -1;
}

/*
 * string[startIndex..endIndex] me har jo ch milta hai,
 * usko uske next character se swap karta hai.
 * Invalid bounds par error message print karke return karega.
 * Swap ke baad substring ko print karega.
 */
void swapCharacterBetweenTwoIndices(char string[], int startIndex, int endIndex, char ch)
{
    int len = strlen(string);
    if (startIndex < 0 || endIndex < startIndex || endIndex + 1 >= len)
    {
        printf("Swap ke liye invalid indices diye gaye\n");
        return;
    }

    // actual swap loop (endIndex-1 tak safe access ke liye)
    for (int i = startIndex; i < endIndex; i++)
    {
        if (string[i] == ch)
        {
            char temp = string[i];
            string[i] = string[i + 1];
            string[i + 1] = temp;
        }
    }

    // swap ke baad substring print karo
    for (int i = startIndex; i <= endIndex; i++)
    {
        printf("%c ", string[i]);
    }
    printf("\n");
}

/*
 * Poore string me iterate karke check karega ki
 * saare chars alphanumeric ([A–Z][a–z][0–9]) hain ya nahi.
 * Pehli baar non-alphanumeric mile to turant print karke return.
 * Agar poora string valid raha to end me ek baar message dega.
 */
void checkAlphaNumeric(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        char c = string[i];
        if (!((c >= 'A' && c <= 'Z') ||
              (c >= 'a' && c <= 'z') ||
              (c >= '0' && c <= '9')))
        {
            printf("Non-alphanumeric character mil gaya\n");
            return;
        }
    }
    printf("String bilkul alphanumeric hai\n");
}

int main()
{
    char string[] = "abc123d+ef456789";
    int startIndex = 0;
    int endIndex = 5;
    char ch = 'j';

    // 1) Search example:
    // int res = findCharacterBetweenTwoIndices(string, startIndex, endIndex, ch);
    // printf("Found? %d\n", res);

    // 2) Swap example:
    // swapCharacterBetweenTwoIndices(string, startIndex, endIndex, 'd');

    // 3) Alphanumeric check:
    checkAlphaNumeric(string);

    return 0;
}
