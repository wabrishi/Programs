#include<stdio.h>

int main()
{
    int size=2;
    int m[size][size],n[size][size],add[size][size],mul[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the m[%d][%d] element",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the n[%d][%d] element",i,j);
            scanf("%d",&n[i][j]);
        }
    }
    // add
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            add[i][j]=m[i][j]+n[i][j];
        }
    }
    printf("Sum of Matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
// Multiply
    
    for (int i = 0; i < size; i++)
    {
        int temp=1;
        int k=0;
        for (int j = 0; j < size; j++)
        {
            temp = m[i][j]*n[j][i];
        }
        k++;
        mul[i][k]=temp;
    }
    printf("Multiply of Matrix:\n");
    for(int i=0;i<r;i++)    
    {    
    for(int j=0;j<c;j++)    
    {    
    mul[i][j]=0;    
    for(k=0;k<c;k++)    
    {    
    mul[i][j]+=a[i][k]*b[k][j];    
    }    
    }    
    }  




    
}