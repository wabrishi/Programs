#include<stdio.h>
#include<string.h>

int main()
{
    int r,c,temp;
    int end,start;

    int rows = 3;
    int columns = 3;

    int a[rows][columns]; 
    for(int i=0; i<rows;i++){
        for(int j=0;j<columns;j++ ){
            printf("Enter the value for a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    end=columns-1;
    start=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp=a[i][start];
            a[i][start]=a[i][end];
            a[i][end]=temp;
        }
    }
    
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d\t",a[r][c]);
        }
        printf("\n");
    }
}