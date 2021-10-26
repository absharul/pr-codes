#include<iostream>
using namespace std;

class complx{
    public:
           int real, imag;
           complx(){
               real=imag=0;
               }
          complx(int r){
              real=r;
              imag=0;
          }
          complx(int r, int i){
              real=r;
              imag=i;
          }
          complx(complx &x){
              real=x.real;
              imag=x.imag;
          }
    complx add(complx s){
        complx Add;
      Add.real=real+s.real;
      Add.imag=imag+s.imag;
       return Add;
    }
    complx sub(complx s){
        complx Sub;
        Sub.real=real-s.real;
        Sub.imag=imag-s.imag;
        return Sub;
    }
    complx mult(complx s){
        complx Mult;
        Mult.real=real*s.real-imag*s.imag;
        Mult.imag=real*s.imag-s.real*imag;
        return Mult;
    }

   complx div(complx s){
        complx Div;
        Div.real = (real*s.real + imag*s.imag)/(s.real*s.real + s.imag*s.imag);
        Div.imag = (imag*s.real + real*s.imag)/(s.real*s.real + s.imag*s.imag);
        return Div;
    }         
    void print(){
        cout<<real<<"+"<<imag<<"i"<<endl<<endl;

    }  
    int getReal() const {
     return real;
    }
    int getImag() const{
        return imag;
    }
    int setReal(int re){
        real = re;
    }
    void setImag(int im){
        imag = im;
    }

};

int main(){
    int real1, imag1, real2, imag2;
    cout<<"Enter the real part of first number: ";
    cin>>real1;
    cout<<"Enter the imaginary part of First number: ";
    cin>>imag1;
    complx obj1(real1, imag1);
    obj1.print();

    cout<<"Enter the real part of second number: ";
    cin>>real2;
    cout<<"Enter the imaginary part of second number: ";
    cin>>imag2;
    complx obj2(real2, imag2);
    obj2.print();

    complx s;
    s = obj1.add(obj2);
    cout<<endl<<"Addition result is : ("<<s.getReal()<<")+("<<s.getImag()<<")i"<<endl;
    return 0;
} 

