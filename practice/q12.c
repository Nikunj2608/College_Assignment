#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if(marks<=100 && marks>=80)
    {
        printf("You have got A grade\n");
    }
    else if(marks<80 && marks>=60)
    {
        printf("You have got B grade\n");
    }
    else if(marks<60 && marks>=40)
    {
        printf("You have got C grade\n");
    }
    else if(marks<40 && marks>=0)
    {
        printf("You have got F grade\n");
    }
    else
    {
        printf("Invalid marks\n");
    }
}