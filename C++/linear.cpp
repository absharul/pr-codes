#include<iostream>
using namespace std;

int main(){
    int n, asize[100];
    cout<<"\nEnter the size: ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>asize[i];
        }
    for(int i=0; i<n; i++){
        cout<<"Elements are: "<<asize[i]<<endl;
    }    
    int key;
    cout<<"\nEnter element you want to search: ";
    cin>>key;

    for(int i=0; i<n; i++){
       if(asize[i] == key){
           cout<<key<<" is found"<<endl;
           return true;
       }
     }    
    cout<<"\nnot found";
    return 0;
}