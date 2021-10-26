#include<iostream>
using namespace std;

int main(){
    
    string str;
    char ask;
    printf("Hii I'm Mariah!!\n");
    printf("Type your name: ");
    string name;
    getline(cin,name);
    getline(cin,str);
    if(str=="Hii" || str=="Hello" || str=="hii" || str=="hello" || str=="hii mariah" || str=="hello mariah"){
        cout<<"Hii "<<name<<endl;
        cout<<"Type: ";
    }
    string q1;
    getline(cin,q1);
    if(q1=="Refund" || q1=="Paisa kab milega"|| q1=="I didn't got money back"|| q1=="money back" || q1=="refund" || q1=="paisa"){
        cout<<"We will initiate your refund soon "<<name<<"\nThank you";
    }
    else{
        cout<<"Didn't got your problem "<<name;
    }
    cout<<"\nAsk more ? y/n: ";
    cin>>ask;
    while(ask =='y'){
        return  main();
    }
    return 0;

}