#include<iostream>
using namespace std;



int main(){
    int numlis[] = {1,3,4,6,8,12,24,56,78,123,125,134,156,178,198,234,245,250};
    int n = sizeof(numlis)/sizeof(numlis[0]);
    int lb=0;
    int ub=n-1;
    int mid;
    int x;
    cout<<"\nEnter the element you to search: ";
    cin>>x;
    
    while(lb<=ub){
        mid=(lb+ub)/2;

      if(numlis[mid]>x){
          return mid= mid+1;
      }
      else if(numlis[mid]< x){
          return mid= mid-1;
      }
      else if(numlis[mid]==x){
          cout<<"\nElement found at: "<<x;
      }

    }
    cout<<"\nElement not found: ";
    return 0;
}