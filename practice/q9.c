#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if(marks>40)
    {
        printf("You have passed\n");
    }
    else
    {
        printf("You have failed\n");
    }
}