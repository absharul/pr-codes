#include<iostream>
using namespace std;

class encpasb{

    private:
    int a;

    public:

    void set(int x)
    {
        a=x;
    }
    int get()
    {
        return a;
    }
};

int main()
{
    encpasb take;
     take.set(50);
     cout<<take.get();
     }