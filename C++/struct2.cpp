#include<iostream>
using namespace std;

struct biodata{
    char name[50];
    char address[10];
    int  pincode;
    int mobilenum;
};

biodata getdata(biodata);
void display(biodata);

int main(){
   biodata inpt; 
     
     getdata(inpt);
     display(inpt);

   return 0;
   
}
biodata getdata(biodata inpt){
    cout<<"\nEnter the name: ";
    cin.get(inpt.name,50);
    cout<<"\nEnter the address: ";
    cin.get(inpt.address,10);
    cout<<"\nEnter pincode: ";
    cin>>inpt.pincode;
    cout<<"\nEnter the mobile number: ";
    cin>>inpt.mobilenum;
   
   return inpt;

}

void display(biodata inpt){
    cout<<"\nName: "<<inpt.name;
    cout<<"\nAddress: "<<inpt.address;
    cout<<"\nPincode: "<<inpt.pincode;
    cout<<"\nMobile number: "<<inpt.mobilenum;
}
