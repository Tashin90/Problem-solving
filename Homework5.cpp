#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter any number"<<endl;
    cin>>number;
    if(number>0)
    {
        cout<<"The absolute value of number:"<<endl;
    }
    else if(number<0)
    {
        number=-number;
        cout<<"The absolute value of number:"<<endl;
    }
    else
    {
        cout<<"This is not a number"<<endl;
    }
    return 0;
}
