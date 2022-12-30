
#include<stdio.h>

void main()
{ 
   int a,b,larg;    

   printf("Enter two number\n");
   scanf("%d %d",&a,&b);
   larg = a>b?a:b;
   printf("Largest Number is : %d",larg); 

}