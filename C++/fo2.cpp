#include<iostream>
using namespace std;

void display(int var1, double  var2){
    cout<<"Integr number is : "<<var1<<endl;
    cout<<"Double number is : "<<var2<<endl;
}
void display(int var){
    cout<<"Integer var is : "<<var<<endl;
}

void display(double var){
    cout<<"Double var is : "<<var<<endl;
}

int main(){
    
    int a=10;
   double b=10.5;

    display(a);
    display(b);
    display(a,b);
}