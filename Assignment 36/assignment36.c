#include <stdio.h>
#include <stdbool.h>

int lengthHelper(char string[])
{
    int i;
    for (i = 0; string[i]; i++)
        ;
    return i;
}

bool compareTwoString(char s1[], char s2[])
{

    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return false;
        i++;
    }

    return (s1[i] == '\0' && s2[i] == '\0');
}

int main()
{
    char s1[] = "hello";
    char s2[] = "hello";

    bool res = compareTwoString(s1, s2);
    printf(" After comapre two String %B", res);
}