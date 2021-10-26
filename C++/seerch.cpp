#include<iostream>
using namespace std;

int main(){
    int first, last, middle;
    int a[20], n, key;
    cout<<"\nEnter the size of array: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    cout<<"\n Enter the element you want to search: ";
    cin>>key;
    first=0;
    last=n-1;
    middle=(first+last)/2;

    while(first<=last){
        if(a[middle]<key){
            first=middle+1;
        }
        else if(a[middle]==key){
            cout<<"\n\t"<<key<<" found at "<<middle+1;
            break;
        }
        else{
            last=middle-1;
        }
        middle=(first+last)/2;
    }
    if(first>last){
        cout<<"\n\t"<<key<<"is not in array";
    }
    
    return 0;
}