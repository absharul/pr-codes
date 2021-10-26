#include<iostream>
using namespace std;

int main(){
    int g,h;
    cin>>g>>h;
    
    int result = g-h;

    if(result<0){
     result= result*(-1);
}
    cout<<result;
    return 0;
}