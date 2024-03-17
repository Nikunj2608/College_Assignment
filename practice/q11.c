#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character to detect whether it is small, capital,digit or any special character : ");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z')
    {
        printf("The character is small\n");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("The character is capital\n");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("The character is a digit\n");
    }
    else
    {
        printf("The character is a special character\n");
    }
}