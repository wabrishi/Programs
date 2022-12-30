#include<stdio.h>
int main()
{
 
    float principal, rate, time;
    printf("Enter the principal amount: ");
    scanf("%f",&principal);
    printf("Enter the rate of interest(per Year): ");
    scanf("%f",&rate);
    printf("Enter the time(in Year): ");
    scanf("%f",&time);
 
    float  simple_interest, amount;
    simple_interest = ((principal*rate*time)/100);
    amount = simple_interest + principal;
    printf("Simple Interest = %f \nAmount = %f\n",simple_interest, amount);
    return 0;
}