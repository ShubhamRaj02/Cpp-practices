#include <iostream>
using namespace std;
int main()
{
  char button;
  cout << "Enput the button ...... :- ";
  cin >> button;
  cout << button << endl;
  switch (button)
  {
  case 'a':
    cout << "Namaste" << endl;
    break;
  case 'b':
    cout << "Hola" << endl;
    break;
  case 'c':
    cout << "Full Power" << endl;
  case 'd':
    cout << "OR badka g" << endl;
  default:
    cout << "still learning" << endl;
    break;
  }
}