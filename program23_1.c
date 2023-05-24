/*
1.Write a program which accept string from user and convert it into 
lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os

*/
#include<stdio.h>

void strlwrX(char *str)
{
    int Gap = 0;
    Gap = 'a'-'A';
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    strlwrX(Arr);

    printf("Modified string is:%s\n",Arr);

    return 0;
}
