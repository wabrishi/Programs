#include<iostream>
int main()
{
    int a,b,c,d;
    tag:
    std::cout<<"Enter the number row and colume for Matrix - ";
    std::cin>>a>>b>>c>>d;
    int arr1[a][b],arr2[c][d],M12[a][d],i,j;
    if(b==c)
    {
        // Read First Array
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                std::cout<<"Enter the Number of First Matrix for - "<<"("<<i<<j<<") = ";
                std::cin>>arr1[i][j];
                /* code */
            }
            
            /* code */
        }
        //Read Second Array 
        for (i = 0; i < c; i++)
        {
            for (j = 0; j < d; j++)
            {
                std::cout<<"Enter the Number of Second Matrix for - "<<"("<<i<<j<<") = ";
                std::cin>>arr2[i][j];
                /* code */
            }
            
            /* code */
        }
        std::cout<<"Multiply Of Matrix Is \n";
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                M12[i][j] = 0;
                for (int k = 0; k < b; k++)
                {
                    M12[i][j] +=arr1[i][j]*arr2[i][j];
                    /* code */
                }
                
                std::cout<<M12[i][j]<<"\t";
                /* code */
            }
            std::cout<<"\n";
            /* code */
        }
    }else
    {
        std::cout<<"Please enter same Colume of Matrix 1 and Row of Matrix 2\n";
        goto tag;
    }
    return 0;

}