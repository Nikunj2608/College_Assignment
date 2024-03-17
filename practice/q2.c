#include<stdio.h>
int main()
{
    int h , b;
    float a;
    printf("Enter the value of h : ");
    scanf("%d", &h);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    a = 0.5 * h * b;
    printf("The area of the triangle is : %f", a);
}