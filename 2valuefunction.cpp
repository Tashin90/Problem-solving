#include<iostream>
using namespace std;
void max()
{
    int a,b;
    cout<<"enter the value"<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<"a is max";
    }
    else{
        cout<<"b is max";
    }
}
void addition()
{
    int a;int b;
    cout<<"enter the two value"<<endl;
    cin>>a>>b;
    int sum=0;
    sum=a+b;
    cout<<"sum="<<sum<<endl;
}
int main()
{
    max();
    addition();
    return 0;
}
