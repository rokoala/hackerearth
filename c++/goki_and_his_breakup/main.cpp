#include <iostream>

using namespace std;

int main() {
  int n, x;

  cin >> n >> x;

  while (n--) {
    int y;
    cin >> y;
    cout << ((y >= x) ? "YES" : "NO") << endl;
  }
}