#include<iostream>
using namespace std;

struct Biodata
{
  char name[50];
  int age;
};
void display(Biodata);
int main(){

    Biodata take;
    
    cout<<"\nEnter the name: ";
    cin.get(take.name, 50);
    cout<<"\nEnter the age:  ";
    cin>>take.age;

    display(take);

    return 0;

}
void display(Biodata take){
    cout<<"\nInformation "<<endl;
    cout<<"Name: "<<take.name<<endl;
    cout<<"Age: "<<take.age<<endl;
}