#include<iostream>
// #include <stdlib.h>
// #define clrscr(); system("cls");

int main()
{
    int arr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<"Enter the Number for"<<"("<<i<<j<<")";
            std::cin>>arr[i][j];
            /* code */
        }
        
        /* code */
    }
        for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<arr[i][j]<<"\t";
            /* code */
        }
        std::cout<<"\n";
        /* code */
    }
    return 0;

}