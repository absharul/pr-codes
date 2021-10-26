#include<iostream>
using namespace std;

int main(){
  int ullus[5];
    cout<<"Enter the 5 ullus: "<<endl;
    for(int i=0; i<5; ++i){
      cin>>ullus[i];
    }
    cout<<"The number of ullus on the tree: ";
    for(int j=0; j<5; ++j){
      cout<<ullus[j]<<" ";
    }

    return 0;
}