#include<iostream>
using namespace std;
int main(){
 int a[10][10],b[10][10],c[10][10];
 int i,j,row,col;
 cout<<"enter the number of row and col";
 cin>>row;
 cin>>col;

 //value input a
 for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        cout<<"a["<<i<<"]["<<j<<"] ="<<endl;
        cin>>a[i][j];
    }
 }
 for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        cout<<"b["<<i<<"]["<<j<<"] ="<<endl;
        cin>>b[i][j];
    }
 }
 for(i=0;i<row;i++){
    for(j=0;j<col;j++){

        cout<<a[i][j]<<endl;}}

  cout<< endl;



  for(i=0;i<row;i++){
    for(j=0;j<col;j++){

        cout<<b[i][j]<<endl;
    }
 }
  cout<<endl;


  for(i=0;i<row;i++){
    for(j=0;j<col;j++){

        c[i][j]=a[i][j]+b[i][j];
    }
 }
  cout<< endl;

  for(i=0;i<row;i++){
    for(j=0;j<col;j++){

        cout<<c[i][j];
    }
 }
 return 0;
}

