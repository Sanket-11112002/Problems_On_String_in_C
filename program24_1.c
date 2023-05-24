/*
1.Write a program which accept string from user and accept one 
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
e
Output : TRUE
Input : “Marvellous Multi OS”
W
Output : FALSE

*/
#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str != '\0')
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
   char cValue = '\0';
   bool bRet = false;

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr);

   printf("Enter the character:\n");
   scanf(" %c",&cValue);

   bRet = ChkChar(Arr,cValue);

   if(bRet == true)
   {
        printf("Character found\n");
   }
   else
   {
        printf("Character not found\n");
   }

    return 0;
}
