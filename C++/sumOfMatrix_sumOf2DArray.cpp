#include<iostream>
int main()
{
    int a,b,c,d;
    tag:
    std::cout<<"Enter the number row and colume for Matrix - ";
    std::cin>>a>>b>>c>>d;
    int arr1[a][b],arr2[c][d],i,j;
    if(a==c && b==d)
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
        std::cout<<"Sum Of Array \n";
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                std::cout<<arr1[i][j]+arr2[i][j]<<"\t";
                /* code */
            }
            std::cout<<"\n";
            /* code */
        }
    }else
    {
        std::cout<<"Please enter same order for both Matrix\n";
        goto tag;
    }
    return 0;

}