#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the no. : ");
    scanf("%d", &n);
    int last_digit;
    last_digit = n%10;
    if(last_digit % 2 == 0)
    {
        printf("The last digit is even\n");
    }
    else
    {
        printf("The last digit is odd\n");
    }
}