#include<iostream>
using namespace std;

int main(){
    int a=0,e=0,i=0,o=0,u=0;
    
    string s;
    cin>>s;

    int s_len = s.length();

    for(int j=0; j<s_len; j++){
        if(s[j]=='a'){
            a++;
        }
        else if(s[j]=='e'){
            e++;
        }
        else if(s[j]=='i'){
            i++;
        }
        else if(s[j]=='o'){
            o++;
        }
        else if(s[j]=='u'){
            u++;
        }

    } 
    cout<<s_len<<endl;
    cout<<'a'<<a<<endl;
    cout<<'e'<<e<<endl;
    cout<<'i'<<i<<endl;
    cout<<'o'<<o<<endl;
    cout<<'u'<<u<<endl;
  
  return 0;
}