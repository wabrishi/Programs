#include <stdio.h>
 
int main()
{
int num1, num2 , num3 , max_no;
printf ( "Put any three digits\n" );


scanf( "%d %d %d", & num1 , & num2 , & num3 );
max_no = ( num1 > num2 ) ? ( num1 > num3 ? num1 : num3 ) : ( num2 > num3 ? num2 : num3 );
printf ( "The largest of the three numbers ( %d, %d and %d ) is: %d.\n",num1, num2, num3, max_no );
 
return 0;
}