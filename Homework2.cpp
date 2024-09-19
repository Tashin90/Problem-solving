#include<iostream>
using namespace std;
int main()
{
    char alphabet;
    cout<<"enter the alphabet"<<endl;
    cin>>alphabet;
    if(alphabet>='a'&&alphabet<='z'){alphabet=alphabet-32;}

    if(alphabet>='A'&&alphabet<='z'){
        switch(alphabet){
    case'A':
    case'E':
    case'I':
    case'O':
    case'U':
        cout<<"vowel"<<endl;
        break;
    default:
        cout<<"consonant"<<endl;
        break;}
}
        else{
                cout<<"not a character"<<endl;


    }
    return 0;
}
