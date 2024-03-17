#include<stdio.h>
int main()
{
    int a , b , c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    if(a>b)
    {
        if(a>c)
        {
            printf("The value of a is the greatest\n");
        }
        else
        {
            printf("The value of c is the greatest\n");
        }
    }
    else
    {
        if(b>c)
        {
            printf("The value of b is the greatest\n");
        }
        else
        {
            printf("The value of c is the greatest\n");
        }
    }
}