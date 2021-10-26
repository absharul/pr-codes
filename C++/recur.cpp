#include <iostream>
using namespace std;

int check(int);

int main(){
    int n , result;
    cout<<"Enter a Non-negative Number : ";
    cin>>n;
    result=check(n);
    cout<<"Factorial of "<<n<<" = "<<result<<endl;
    return 0;
}

int check(int n){
    if(n>1)
    return n*check(n-1);
    else
    return 1;
    
    }