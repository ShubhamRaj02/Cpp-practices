#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter no of rows :- ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    int spc = 2 * n - 2 * i;
    for (int i = 1; i <= spc; i++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = n; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    int spc = 2 * n - 2 * i;
    for (int i = 1; i <= spc; i++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}