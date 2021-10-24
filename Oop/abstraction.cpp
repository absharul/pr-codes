#include<iostream>
using namespace std;

class importq{
    
    private:
    int a, b;

    public:
     
     void num(int x, int y)
     {
       a=x;
       b=y;
     }

     void display()
     {
         cout<<"a: "<<a<<endl;
         cout<<"b: "<<b;
     }

};

int main()
{
    importq g;

    g.num(30,50);
    g.display();
   
   return 0;
   
}