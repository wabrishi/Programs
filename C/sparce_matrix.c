#include<stdio.h>
int main()
{
    int mr,mc;
    printf("Enter the row and colume of Matrix");
    scanf("%d%d",&mr,&mc);

    int m[mr][mc];
    for(int i=0;i<mr;i++)
    {
        for(int j =0;j<mc;j++)
        {
            printf("Enter the value for MATRIX[%d][%d]",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    for(int i=0;i<mr;i++)
    {
        for(int j =0;j<mc;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    int smr=1, smc=3;
    for(int i=0;i<mr;i++)
    {
        for(int j =0;j<mc;j++)
        {
            if(m[i][j]!=0)
            {
                smr+=1;
            }
        }
        
    }
    if (smr<(mr*mc)/2)
    {
        int sm[smr][smc],x=1;
        sm[0][0] =mr;
        sm[0][1]=mc;
        sm[0][2] = smr-1;
        for(int i=0;i<mr;i++)
        {
            for(int j =0;j<mc;j++)
            {
                if(m[i][j]!=0)
                {
                    sm[x][0] = i;
                    sm[x][1] = j;
                    sm[x][2] = m[i][j];
                    x+=1;
                }
            }
            
        }
        printf("sparce Matrix:\n");
        for(int i=0;i<smr;i++)
        {
            for(int j =0;j<smc;j++)
            {
                printf("%d\t",sm[i][j]);
            }
            printf("\n");
        }
    }
}