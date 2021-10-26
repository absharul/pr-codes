#include<iostream>
using namespace std;

float absolute(float var){
    if(var<0.0)
       var = -var;
       return var;
}

int absolute(int var){
    if(var<0)
      var = -var;
      return var;

}

int main(){
    cout<<"Absolute value of -5 is : "<<absolute(-5)<<endl;
    //calling float fuction

    cout<<"Absolute value of -5.5 is : "<<absolute(5.5f)<<endl;
}