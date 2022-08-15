// Decimal to binary
#include<bits/stdc++.h>
using namespace std;

int octalToDecimal(int n){
  int ans = 0;
  int x = 1;
  while(n>0){
    int y = n % 10;
    ans += x * y;
    x *= 8;
    n /= 10;
  }
  return ans;
}

int32_t main(){
  int n;
  cout << "Enter Octal Number :- ";
  cin >> n;
  cout << octalToDecimal(n) << endl;
}