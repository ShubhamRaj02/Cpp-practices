#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
  for (int i = 2; i <= sqrt(n);i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}
int main(){
  int a, b;
  cout << "Enter the Numbers To find all prime number between them :- ";
  cin >> a >> b;
  cout << "Primes numbers are :-> ";

  for (int i = a; i <= b; i++)
  {
    if(isPrime(i)){
      cout << i << endl;
    }
  }
}