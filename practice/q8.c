#include<stdio.h>
int main()
{
    int  a;
    printf("Enter the no. : ");
    scanf("%d", &a);
    if(a>0)
    {
        printf("The no. is positive\n");
    }
    else if(a<0)
    {
        printf("The no. is negative\n");
    }
    else
    {
        printf("The no. is zero\n");
    }
    
}