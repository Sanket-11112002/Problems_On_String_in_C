/*
2. Write a program which accept string from user and count number of 
small characters.
Input : “Marvellous”
Output : 9
*/
#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("Small letters are:%d",iRet);

    return 0;
}
