#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. to check wheter it is which day : ");
    scanf("%d", &n);
    if(n==1)
    {
        printf("The day is Monday\n");
    }
    else if(n==2)
    {
        printf("The day is Tuesday\n");
    }
    else if(n==3)
    {
        printf("The day is Wednesday\n");
    }
    else if(n==4)
    {
        printf("The day is Thursday\n");
    }
    else if(n==5)
    {
        printf("The day is Friday\n");
    }
    else if(n==6)
    {
        printf("The day is Saturday\n");
    }
    else if(n==7)
    {
        printf("The day is Sunday\n");
    }
    else
    {
        printf("Invalid input\n");
    }
}