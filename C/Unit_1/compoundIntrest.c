#include<stdio.h>
#include <math.h>
int main()
{
 
    float principal, rate, time;
    printf("Enter the principal amount: ");
    scanf("%f",&principal);
    printf("Enter the rate of interest(per Year): ");
    scanf("%f",&rate);
    printf("Enter the time(in Year): ");
    scanf("%f",&time);
 
    float  compound_interest, amount;
    compound_interest = principal*(pow(1+(rate/100), time));
    amount = compound_interest + principal;
    printf("Compound  Interest = %f \nAmount = %f\n",compound_interest, amount);
    return 0;
}