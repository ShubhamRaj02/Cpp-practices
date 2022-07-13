#include <iostream>
using namespace std;
int main()
{
  int p_money = 0;
  cout << "Enter Pocket money:-" << endl;
  cin >> p_money;
  for (int date = 1; date <= 30; date++)
  {
    if (date % 2 == 0)
    {
      continue;
      // continue statement is used to skip to the next iteration of the loop
    }
    if (p_money == 0)
    {
      break;
      // Break statement is usedd to terminate the loop
    }
    cout << "Go out today";
    p_money = p_money - 300;
  }
}