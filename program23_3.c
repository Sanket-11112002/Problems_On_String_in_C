/*
3.Write a program which accept string from user and toggle the case.
Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os

*/
#include<stdio.h>

void strtoggleX(char *str)
{
    int Gap = 0;
    Gap = 'a'-'A';
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - Gap; 
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + Gap;
        }
        str++;
    }

}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("Modified string is:%s\n",Arr);

    return 0;
}
