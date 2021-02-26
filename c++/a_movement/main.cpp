#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  cout << ((n <= 5) ? n : n / 5 + ((n % 5) ? 1 : 0)) << endl;
}