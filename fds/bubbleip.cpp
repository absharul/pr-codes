#include<iostream>
using namespace std;

void display(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<" "<<a[i];
    }
}

void bubsort(int a[],int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            
            if(a[j]<a[i]){
                int swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
    }
}

int main(){
    int a[10], n;
    cout<<"Enter the unsorted elements: "<<endl;
    for(int i=0; i<10; i++){
        cin>>a[i];
    }
    n=sizeof(a)/sizeof(a[0]);
    cout<<"\nUnsorted array: ";
    display(a,n);
    bubsort(a,n);
    cout<<"\nSorted array: ";
    display(a,n);

    return 0;
}