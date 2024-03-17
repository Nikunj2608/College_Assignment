#include<stdio.h>
int main()
{
    int basic , hra , da , gross;
    int NetSalary , MedicalAllowance , ProvidentFund;
    printf("Enter the basic salary: ");
    scanf("%d", &basic);
    hra = 0.4 * basic;
    da = 0.2 * basic;
    gross = basic + hra + da;
    printf("The gross salary is: %d\n", gross);
    MedicalAllowance = 0.25 * basic;
    ProvidentFund = 0.08 * basic;
    NetSalary = gross + MedicalAllowance - ProvidentFund;
    printf("The net salary is: %d\n", NetSalary);
    return 0;
}