#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;

    if(ptr!=NULL)
    {
        cout<<"Value of ptr: "<<ptr;
    }
    else
    {
        cout<<"Invalid pointer";
    }

    return 0;
}