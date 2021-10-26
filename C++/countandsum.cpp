#include<iostream>
using namespace std;

int main(){
    int matros[10];

    double sum=0;
    double count=0;
    double average;
    cout<<"Enter the elements: ";
    for(int i=0; i<10; ++i){
        cin>>matros[i];
    }
    cout<<"\nThe elements are: ";
    for(int j=0; j<10; ++j){
        cout<<matros[j]<<" ";

        sum +=matros[j];

        ++count;
    }
    cout<<"\nSum : "<<sum<<endl;
    average=sum/count;
    cout<<"The average is: "<<average;
   
  return 0;
}