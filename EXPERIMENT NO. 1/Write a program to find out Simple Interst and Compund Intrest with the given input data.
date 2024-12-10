// Write a program to find out Simple Interst and Compund Intrest with the given input data.
#include <stdio.h>
#include <math.h>
int main() {
    double principal,rate,time,simple_intrest,compound_intrest;

    printf("Enter the Principal amount : ");
    scanf("%lf",&principal);

    printf("Enter the annual intrest rate (in percantage) : ");
    scanf("%lf",&rate);

    printf("Enter the time (in years) : ");
    scanf("%lf",&time);

    simple_intrest=(principal*rate*time)/100.0;

    compound_intrest=principal*(pow((1+rate/100),time))-principal;

    printf("\nSimple Intrest : %.2lf\n",simple_intrest);
    printf("\nCompound Intrest : %.2lf\n",compound_intrest);
    
    return 0;
}
