/*
2.Write a program which accept string from user and convert it into 
upper case.
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS

*/
#include<stdio.h>

void struprX(char *str)
{
    int Gap = 0;
    Gap = 'a'-'A';
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - Gap; 
        }
        str++;
    }

}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("Modified string is:%s\n",Arr);

    return 0;
}
