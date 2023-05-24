/*
4. Write a program which accept string from user and display only 
digits from that string.
Input : “marve89llous121”
Output : 89121
Input : “Demo”

*/
#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("Digits are: %c",*str);
        }
        str++;
    }

}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}
