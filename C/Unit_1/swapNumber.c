#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter A value \n");
    scanf("%d",&a);
    printf("Enter B value \n");
    scanf("%d",&b);
    
    printf("Value of A : %d\n",a);
    printf("Value of B : %d\n",b);
    
    //swap logic
    temp=a;
    a=b;
    b=temp;
    
    printf("Value of A after swap: %d\n",a);
    printf("Value of B after swap: %d\n",b);
    
    return 0;
}