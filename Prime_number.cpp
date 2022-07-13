#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 2; i < n; i++)
  {
    if (n % 1 == 0)
    {
      cout << "Not a Prime number" << endl;
      break;
    }
  }
  cout << "Prime number";
}