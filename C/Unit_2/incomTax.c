#include<stdio.h>
int main(){
    float a;
    float t;
    int ts1=100000,ts2=150000,ts3=250000;   
    printf("Enter the taxable amount = ");
    scanf("%f",&a);
    if(a<ts1)
    {
        printf("Your Income Belongs to Tax Free Slabe");
    }
    else if (a>ts1 && a<ts2)
    {
        t=((a-ts1)/100)*10;
        printf("Tax is =%f",t);
    }
    else if (a>ts2 && a<ts3)
    {
        t=((ts2/100)*10)+(((a-ts2)/100)*20);
        printf("Tax is =%f",t);
        /* code */
    }
    else if (a>ts3)
    {
        t=(((ts3)/100)*10)+(((a-ts3)/100)*30);
        printf("Tax is =%f",t);
        /* code */
    }
    
    return 0;
    
}