#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the no rows :- ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (j <= i)
      {
        cout << i;
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}