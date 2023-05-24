/*
5. Write a program which accept string from user and display it inn 
reverse order.
Input : “MarvellouS”
Output : “SuollevraM”

*/
#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;
        
        str++;
        end--;
    }
    

}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("Reverse string is:%s\n",Arr);

    return 0;
}
