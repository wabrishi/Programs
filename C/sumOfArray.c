#include<stdio.h>
int a[5];
int sum();
int main()
{
    
    for (int i = 0; i < 5;i++)
    {
        /* code */
        scanf("%d",&a[i]);

    }
    printf("%d",sum());    
    return 0;
}
int sum()
{
    int s=0;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        s= s+ a[i];       
    }
    return s;
    
}