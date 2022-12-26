#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int dev(int,int);
int main()
{
    int a,x,y;
    start:
    printf("1 for SUM\n 2 for SUB\n 3 for Multiply \n 4 for Devide\n");
    printf("enter the number between 1-4=  ");
    scanf("%d",&a);
    if (a>4 && a>1)
    {
        printf("wrong input");
        goto start;
    }
    
    printf("Enter Two Number to perform task= ");
    scanf("%d%d",&x,&y);
    switch (a)
    {
    case 1:
        printf("%d",sum(x,y));
        break;
    case 2:
        printf("%d",sub(x,y));
        break;
    case 3:
        printf("%d",mul(x,y));
        break;
    case 4:
        printf("%d",dev(x,y));
        break;    
    default:
        break;
    }
    return 0;
}
int sum(int a, int b)
{
    int c = a+b;
    return c;
}

int sub(int a, int b)
{
    int c = a-b;
    return c;
}
int mul(int a, int b)
{
    int c = a*b;
    return c;
}
int dev(int a, int b)
{
    float c = (float)a/b;
    return c;
}
