#include<iostream>
using namespace std;

int takearry(){
    int r,c;
    int alexa[100][100];
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"\nEnter the number of column: ";
    cin>>c;

    cout<<"\nEnter the array elements: ";
    for(int i=0; i<r; ++i){
        for(int j=0; j<c; ++j){
            cin>>alexa[i][j];
        }
    }    

    for(int i=0; i<r; ++i){
        for(int j=0; j<c; ++j){
            cout<<"alexa["<<i<<"]["<<j<<"] "<<alexa[i][j]<<" "<<endl;
        }
    }
    return 0;
}

int main(){
    takearry();
}