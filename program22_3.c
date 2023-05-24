/*
3. Write a program which accept string from user and return 
difference between frequency of small characters and frequency of 
capital characters.
Input : “MarvellouS”
Output : 6 (8-2)

*/
#include<stdio.h>

int Difference(char *str)
{
    int iCount1 = 0;
    int iCount2 = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount1++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount2++;
        }
        str++;
    }
    return (iCount1 -iCount2);
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("Small letters are:%d",iRet);

    return 0;
}
