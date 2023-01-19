#include<stdio.h>
#include<string.h>

int main()
{
    int r,c,temp;
    int end,start,rows,columns;
    printf("Enter the Row and colume = ");
    scanf("%d%d",&rows,&columns);
    int a[rows][columns]; 
    for(int i=0; i<rows;i++){
        for(int j=0;j<columns;j++ ){
            printf("Enter the value for a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    end=columns-1;
    start=0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            temp=a[i][start];
            a[i][start]=a[i][end];
            a[i][end]=temp;
            if (start<end)
            {
                end--;
                start++;
            }
        }
        end=columns-1;
        start=0;
    }
    
    for(r=0;r<rows;r++){
        for(c=0;c<columns;c++){
            printf("%d\t",a[r][c]);
        }
        printf("\n");
    }
}