#include<iostream>
using namespace std;

void display(int a[],int n){

    int i;
    for(i=0; i<n; i++){
        cout<<" "<<a[i];
    }
}

void bubble(int a[], int n){
    int i,j,swap;

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){

            if(a[j]< a[i]){
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
    }
}

int main(){
    int a[]={23,11,56,24,78,65,43,34,12,9,71,28,17,19,6,3,1};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Unsorted array"<<endl;
    display(a,n);
    bubble(a,n);
    cout<<"\nSorted array"<<endl;
    display(a,n);

    return 0;
}