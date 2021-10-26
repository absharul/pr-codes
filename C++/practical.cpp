#include<iostream>
using namespace std;

class example{
    public:
         int a;
         void add(example e){
             a=a*e.a;
         }
};
int main(){
    example E1,E2;
    E1.a=50;
    E2.a=100;
    cout<<"initial value";
    cout<<"value of obj 1"<<E1.a<<" and "<<"Value of obj 2"<<E2.a<<endl;
    
    E2.add(E2);
    cout<<"New value"<<endl;

    cout<<"value of obj 1 : "<<E1.a<<" and "<<"Value of obj 2 : "<<E2.a<<endl;
    return 0;
}

