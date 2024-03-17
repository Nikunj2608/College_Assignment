#include<stdio.h>
int main()
{
    int p , r , n ;
    float i ;
    printf("Enter the value of principal amount : ");
    scanf("%d", &p);
    printf("Enter the value of rate of interest : ");
    scanf("%d", &r);
    printf("Enter the value of time period : ");
    scanf("%d", &n);
    i = (p * r * n) / 100;
    printf("The simple interest is : %f", i);
}