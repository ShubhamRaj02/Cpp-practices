/**/
#include <iostream>
using namespace std;
int fact(int num){
  int k = 1;
  for (int i = 2; i <= num;i++){
    k *= i;
  }
  return k;
}
int main()
{
  int n;
  cout << "Enter no of rows :- ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << fact(i) / (fact(j) * fact(i - j)) << " ";
    }
    cout << endl;
  }
}