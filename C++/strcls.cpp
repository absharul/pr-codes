#include<iostream>
using namespace std;

int a = 15;

void check();

int main(){
    a++;
    cout<<a<<endl;
    check();

    return 0;

}

void check(){
    a++;
    cout<<a<<endl;
    
}