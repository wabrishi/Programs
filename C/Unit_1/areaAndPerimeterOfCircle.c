#include<stdio.h>
#define PI 3.14
int main()
{
    float a,b;
    char c;
    printf("A - for Area\nP - for perimeter\n");
    printf("Enter the Charecter(A or P) = ");
    scanf("%s",&c);
    printf("Enter the Redious of the circle = ");
    scanf("%f",&a);
    switch (c)
    {
    case 'a':
    case 'A':
        b=PI*a*a;
        printf("Area is = %f\n", b);
        break;
    case 'P':
    case 'p':
        b=2*PI*a;
        printf("perimeter is = %f\n", b);
        break;
    default:
        break;
    }
}