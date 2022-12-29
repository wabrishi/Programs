#include<stdio.h>
int main()
{
    float a,b;
    char c;
    printf("F - for Celsius to Fahrenheit\nC - for Fahrenheit To Celsius\n");
    printf("Enter the Charecter(F or C) = ");
    scanf("%s",&c);
    switch (c)
    {
    case 'C':
    case 'c':
        printf("Enter the number in Fahrenheit to convert in Celsius = ");
        scanf("%f",&a);
        b=(a-32)*5/9;
        printf("%f\n", b);
        break;
    case 'f':
    case 'F':
        printf("Enter the number in Celsius to convert in Fahrenheit = ");
        scanf("%f",&a);
        b=(a*9/5)+32;
        printf("%f\n", b);
        break;
    
    
    default:
        break;
    }
}