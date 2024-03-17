#include<stdio.h>
int main()
{
    int c ;
    float f ;
    printf("Enter the value of c in celsius: ");
    scanf("%d", &c);
    f = (c*9/5) + 32;
    printf("The value of c in fahrenheit is: %f\n", f);
}