/*
5. Accept character from user and display its ASCII value in decimal, 
octal and hexadecimal format.
Input : A
Output : 
        Decimal 65
        Octal 0101
        Hexadecimal 0X41

*/
#include<stdio.h>

void Display(char ch)
{
    printf(" Decimal:%d\n Octal:%03o\n Hexadecimal:%02X",ch,ch,ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter character:\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}