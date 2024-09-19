#include<iostream>
using namespace std;
int main()
{
    int number,reminder;
    cout<<"Enter the any integer number"<<endl;
    cin>>number;
    if(number>0)
    {
        cout<<"the number is positive"<<endl;
        reminder=number%2==0;
        if(number%2==0)
        {
            cout<<"is the even number"<<endl;
        }
        else
        {
            cout<<"is the odd number"<<endl;
        }
    }
        else{

    cout<<"is the negative"<<endl;
}




    return 0;
}
