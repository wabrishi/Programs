#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);
    printf("%d is  %s", num,(num%2==0 ? "EVEN\n" : "ODD\n"));

    return 0;
}