#include<iostream>
using namespace std;

void sata(){

    static int a = 0;
    ++a;
    cout<<a<<endl;
}

int main(){
    sata();
    sata();
    sata();

    return 0;
}