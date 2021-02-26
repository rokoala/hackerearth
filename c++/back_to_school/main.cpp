#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  cout << ((a > b) ? (a < c) ? c : a : (b < c) ? c : b) << endl;
}