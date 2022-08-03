#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter number to Reverse :- ";
  cin >> n;
  int revrs = 0;
  while(n>0){
    int L_digit = n % 10;
    revrs =revrs*10+ L_digit;
    n = n / 10;
  }
  cout << revrs;
}