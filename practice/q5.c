#include<stdio.h>
int main()
{
    int a , b , c,d,e;
    printf("Enter the value of a in km: ");
    scanf("%d", &a);
    printf("The value of a in meter is: %d\n", a*1000);
    printf("The value of a in inches is: %d\n", a*39370.1);
    printf("The value of a in feet is: %d\n", a*3280.84);
    printf("The value of a in centimeter is: %d\n", a*100000);
}