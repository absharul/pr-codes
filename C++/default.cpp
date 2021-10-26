#include <iostream>
using namespace std;

void def(char='*', int = 3);

int main(){
    int kapa = 5;

    cout<<"No argumet is passed"<<endl;
    def();

    cout<<"Both argument is passed"<<endl;
    def('#',kapa);

    cout<<"First argument is passed"<<endl;
    def('$');

    return 0;

}

void def(char c, int kapa){
for(int i=1; i<=kapa; ++i){
    cout<<c;
}
cout<<endl;
}