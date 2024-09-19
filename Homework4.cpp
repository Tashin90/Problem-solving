#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter the three number"<<endl;
    cin>>num1>>num2>>num3;
    if(num1<num2&&num1<num3){
        cout<<"smallest num1="<<num1<<endl;
        if(num1%2==0){
                cout<<"num1 is even"<<endl;
        }
        else
        {
            cout<<"num1 is odd"<<endl;
        }
    }



    if(num2<num1&&num2<num3){
        cout<<"smallest num2="<<num2<<endl;
        if(num2%2==0){
            cout<<"num2 is even"<<endl;
        }
        else
        {
            cout<<"num2 is odd"<<endl;
        }
    }




    if(num3<num1&&num3<<num2){
        cout<<"smallest num3="<<num3<<endl;
        if(num3%2==0){
            cout<<"num3 is even"<<endl;
        }
        else
        {
         cout<<"nub3 is odd"<<endl;
        }
    }


    else
    {
        cout<<"FINISH HERE"<<endl;
    }
}
