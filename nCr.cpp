/*
nCr = ((n!)/(((n-r)!)*r!))
*/
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
int main()
{
  int n, r;
  cout << "Enter n and r of nCr :- ";
  cin >> n >> r;

  int res = fact(n) / (fact(r) * fact(n - r));
  cout << res << endl;
}
