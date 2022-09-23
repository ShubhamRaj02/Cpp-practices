#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n;
  cout << "Enter Size of array";
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }
  int maxi = INT_MIN;
  int mine = INT_MAX;
  for (int i = 0; i < n;i++){
    maxi = max(maxi,array[i]);
    mine = min(mine, array[i]);
  }
  cout << maxi << " " << mine;
}