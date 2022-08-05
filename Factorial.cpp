#include <iostream>
using namespace std;
int fact(int num)
{
  int k = 1;
  for (int i = 2; i <= num; i++)
  {
    k *= i;
  }
  
  return k;
}

int main(){
  int n;
  cout << "Enter Number to find its factorial :- ";
  cin >> n;
  int res = fact(n);
  cout << res<<endl;
  return 0;
}