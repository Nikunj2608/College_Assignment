#include<stdio.h>
int main()
{
    int u , t , a , d;
    printf("Enter the value of initial velocity: ");
    scanf("%d", &u);
    printf("Enter the value of time: ");
    scanf("%d", &t);
    printf("Enter the value of acceleration: ");
    scanf("%d", &a);
    d = u*t + (a*t*t)/2;
    printf("The value of distance is: %d\n", d);
}