#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  string cmd;
  cin >> cmd;

  int x, y;
  x = y = 0;

  y = count(cmd.begin(), cmd.end(), 'U') - count(cmd.begin(), cmd.end(), 'D');
  x = count(cmd.begin(), cmd.end(), 'R') - count(cmd.begin(), cmd.end(), 'L');

  cout << x << " " << y << endl;

  return 0;
}