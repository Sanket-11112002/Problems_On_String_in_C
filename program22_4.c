/*
4. Write a program which accept string from user and check whether 
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE

*/
#include<stdio.h>
#include<stdbool.h>

// Vowel :a e i o u
bool ChkVowel(char *str)
{
    bool bFalg = false;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') ||(*str == 'i') ||(*str == 'o') ||(*str == 'u') ||(*str == 'A') ||(*str == 'E') ||(*str == 'I') ||(*str == 'O') ||(*str == 'U') )
        {
            bFalg = true;
            break;
        }
        str++;
    }
    if(bFalg == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == true)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}
