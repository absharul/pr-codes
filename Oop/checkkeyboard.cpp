#include<iostream>
using namespace std;

class test{
    private:

    int a,b;
    
    public:

    void sum(int x,int y){
        a=x;
        b=y;
        
                                            
    }

    void display(){
        cout<<"a: "<<a<<endl;
        
        cout<<"b: "<<b;

    }
};

int main(){

    test num;
    num.sum(45,60);
    num.display();
}