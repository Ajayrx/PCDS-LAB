#include <stdio.h>

int main()
{
    double basicPay, da, hra, ta, grossSalary;

    // Prompt the user to enter basic pay, DA, HRA, and TA printf("Enter Basic Pay: "); scanf("%lf", &basicPay);
    printf("Enter Basic Pay: ");
    scanf("%lf", &basicPay);

    printf("Enter Dearness Allowance (DA): ");
    scanf("%lf", &da);

    printf("Enter House Rent Allowance (HRA): ");
    scanf("%lf", &hra);

    printf("Enter Travel Allowance (TA): ");
    scanf("%lf", &ta);

    // Calculate the gross salary grossSalary basicPay + da + hra + ta;
    grossSalary=basicPay+da+hra+ta;

    // Display the salary statement
    printf("\nSalary Statement:\n");
    printf("Basic Pay: %.2lf\n", basicPay);
    printf("Dearness Allowance (DA): %.2lf\n", da);
    printf("House Rent Allowance (HRA): %.2lf\n", hra);
    printf("Travel Allowance (TA): %.2lf\n", ta);
    printf("Gross Salary: %.2lf\n", grossSalary);

    return 0;
}