#include<iostream>
using namespace std;

int main(){
    int i,j,swap,pass=0;
    int a[10]={12,45,15,18,96,32,4,36,49,25};
    cout<<"List : ";
    for(i=0; i<10; i++){
        cout<<a[i]<<"\t";
         }
    cout<<endl;
     for(i=0; i<10; i++){
         for(j=i+1; j<10; j++){

             if(a[j]<a[i]){
                 swap=a[i];
                 a[i]=a[j];
                 a[j]=swap;
             }
             
         }
         pass++;

     }   
     cout<<"\nsorted list: ";
     for(i=0; i<10; i++){
         cout<<a[i]<<"\t";
     }  
     cout<<"\nnumber of passes taken: "<<pass<<endl;
     return 0;
}