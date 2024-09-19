#include<iostream>
using namespace std;
int main()


{

    int row,col;
    cout<<"Enter row"<<endl;
    cin>>row;
    cout<<"Enter tcol"<<endl;
    cin>>col;
    int array[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
           cin>> array[row][col];
        }
    }
    int sum=0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum=sum+array[row][col];
        }
    }

        cout<<"sum="<<sum<<endl;
        return 0;


    return 0;
}
