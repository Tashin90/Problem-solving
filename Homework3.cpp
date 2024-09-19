#include<iostream>
using namespace std;
int main()
{
    char gender;
    cout<<"enter the charecter"<<endl;
    cin>>gender;
    switch(gender)
    {
    case'f':
    case'F':
        cout<<"Female"<<endl;
        break;
    case'm':
    case'M':
        cout<<"Male"<<endl;
        break;
    default:
        cout<<"invalid"<<endl;

    }
    return 0;
}
