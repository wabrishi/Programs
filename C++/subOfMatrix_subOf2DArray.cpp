#include<iostream>
int main()
{
    int arr1[2][3],arr2[2][3],i,j;
    // Read First Array
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cout<<"Enter the Number of First Matrix for - "<<"("<<i<<j<<") = ";
            std::cin>>arr1[i][j];
            /* code */
        }
        
        /* code */
    }
    //Read Second Array 
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cout<<"Enter the Number of Second Matrix for - "<<"("<<i<<j<<") = ";
            std::cin>>arr2[i][j];
            /* code */
        }
        
        /* code */
    }
    std::cout<<"Sub Of Array \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<arr1[i][j]-arr2[i][j]<<"\t";
            /* code */
        }
        std::cout<<"\n";
        /* code */
    }
    return 0;

}