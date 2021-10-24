#include<iostream>
using namespace std;

class yo
{
    public: 
    yo()
    {
        cout<<"called constructor"<<endl;
    }

    ~yo()
    {
        cout<<"called desructor"<<endl;
    }
};

int main()
{
    yo y1;
    
   int a=1;

    if(a==1)
    {
        yo y2;
    }

    return 0;
}