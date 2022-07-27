/*
    Print this pattern : -
    12345
    1234
    123
    12
    1
*/

#include <iostream>
using namespace std;
int main()
{
  int n, l = 1;
  cout << "Enter no. Of Rows :- ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n + 1 - i; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}