#include <stdio.h>
#include <string.h>

/*
 ----------------------------------------------------
 Function: findWord
 Purpose: Diye gaye sentence me ek specific word ko dhoondhna
 Returns:
   - Agar word milta hai → uska position (word index)
   - Agar nahi milta → -1
 Logic:
   - Har word ko temporary array me copy karke target word se compare karte hain
 ----------------------------------------------------
*/
int findWord(char str[], char word[])
{
    int i = 0;
    int indexPosition = 0; // Ye batata hai hum kitne words cross kar chuke hain

    while (str[i] != '\0')
    {
        char temp[100]; // Har word ko temporarily store karne ke liye
        int k = 0;

        // Space ya string end tak character copy karo temp[] me
        while (str[i] != ' ' && str[i] != '\0')
        {
            temp[k++] = str[i++];
        }
        temp[k] = '\0'; // Har word ko terminate karna zaroori hai

        // Agar current word target word se match kare
        if (strcmp(temp, word) == 0)
        {
            return indexPosition; // Word found, return its position
        }

        // Agar space mila, toh next word pe jaane ke liye index badhao
        if (str[i] == ' ')
        {
            i++;
        }

        indexPosition++; // Next word ke liye position update karo
    }

    return -1; // Word nahi mila
}

/*
 ----------------------------------------------------
 Function: toUppercase
 Purpose: Ek character ko uppercase me convert karta hai
 Returns: Converted character
 Logic:
   - ASCII me 'a' = 97 aur 'A' = 65 hota hai
   - So, difference = 32 → use subtract kar ke capital bana diya
 ----------------------------------------------------
*/
char toUppercase(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 32;
    }
    return c; // Agar already uppercase hai, toh waise hi return karo
}

/*
 ----------------------------------------------------
 Function: capitalize
 Purpose: Poore string me har word ka first letter capital karo
 Logic:
   - First character ya kisi space ke baad aane wala character ko capital karo
 ----------------------------------------------------
*/
void capitalize(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        // Word start detect karne ke liye condition
        if (i == 0 || str[i - 1] == ' ')
        {
            str[i] = toUppercase(str[i]); // Capital bana do
        }
        i++;
    }
}

/*
 ----------------------------------------------------
 Function: acronym
 Purpose: Ek sentence se acronym banana (e.g. "World Health Org" → "WHO")
 Logic:
   - Har word ke first letter ko capital karke result[] me store karo
 ----------------------------------------------------
*/
void acronym(char str[], char res[])
{
    int i = 0, j = 0;

    while (str[i] != '\0')
    {
        if (i == 0 || str[i - 1] == ' ')
        {
            res[j++] = toUppercase(str[i]); // First letter of word ko result me dalo
        }
        i++;
    }

    res[j] = '\0'; // Acronym string ko terminate karo
}

/*
 ----------------------------------------------------
 Function: concatString
 Purpose: Do strings ko jod kar final result print karta hai
 Logic:
   - In-built strcat() function use hota hai
   - s1 me s2 append ho jaata hai
 ----------------------------------------------------
*/
void concatString(char s1[], char s2[])
{
    strcat(s1, s2);                   // s2 ko s1 ke end me add karo
    printf("After concate-> %s", s1); // Result print karo
}

/*
 ----------------------------------------------------
 Function: main
 Purpose: Program ka entry point hai
 Instructions:
   - Alag-alag functionality test karne ke liye comment/uncomment karte jao
 ----------------------------------------------------
*/
int main()
{
    //  Word Search Test
    // char sentence[] = "Devil is here.";
    // char target[] = "Devil";
    // int wordFound = findWord(sentence, target);
    // if (wordFound >= 0)
    //     printf("Word found at position %d", wordFound);
    // else
    //     printf("Word not found");

    //  Capitalize Each Word Test
    // char input[] = "hi there, Nice to Meet You!";
    // capitalize(input);
    // printf("%s\n", input); // Output: Hi There, Nice To Meet You!

    //  Acronym Test
    // char input[] = "world health organization";
    // char outpu[100];
    // acronym(input, outpu);
    // printf("Acronym-> %s", outpu); // Output: WHO

    // String Concatenation Test
    char s1[100] = "Hello ";
    char s2[] = "World";
    concatString(s1, s2); // Output: After concate-> Hello World

    return 0;
}
