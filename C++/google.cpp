#include<iostream>
using namespace std;

void display(){
    int minOperations;
    cout<<minOperations;
}

int kGoodnessString(string s, int k) {
  int minOperations = 0, x = 0;
  for(int i = 0; i < s.size() / 2; i++) {
     if(s[i] != s[s.size() - i - 1]) {
         x++;
     }
  }

  if(x == k) {
      minOperations = 0;
     display();
  }
  else if(x > k) {
      minOperations = x - k;
      display();
  }
  else {
      minOperations = k - x;
      display();
  }
  return minOperations;
}

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    kGoodnessString(s,k);

    return 0;
}