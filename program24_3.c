/*
3.Write a program which accept string from user and accept one 
character. Return index of first occurrence of that character.
Input : “Marvellous Multi OS”
         M
Output : 0
Input : “Marvellous Multi OS”
         W
Output : -1
Input : “Marvellous Multi OS”
         e
Output : 4

*/
#include<stdio.h>
#define ERR_NOTFOUND -1

int FirstChar(char *str, char ch)
{
    int iCount = 1;
    int iPos = ERR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCount;
            break;
        }
        str++;
        iCount++;
    }
    return iPos;
}

int main()
{
   char Arr[20];
   char cValue = '\0';
   int iRet = 0;

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr);

   printf("Enter the character:\n");
   scanf(" %c",&cValue);

   iRet = FirstChar(Arr,cValue);

    printf("Character location is:%d",iRet);

    return 0;
}
