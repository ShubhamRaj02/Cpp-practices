#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cout << "Entre Number to check :- ";
  cin >> n;
  int ttl = 0;
  int on = n;
  while(n>0){
    int l_digit = n % 10;
    ttl += pow(l_digit, 3);
    n = n / 10;
  }
  if(ttl!=on){
    cout << "Not A Armstrong Number" << endl;

  }
  else{
    cout << "Armstrong Number " << endl;
  }
}