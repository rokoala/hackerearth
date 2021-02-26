#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int i = 1;
  int p, m;
  p = m = 0;

  for (; n > 0; n--) {
    if (p > 0) {
      p--;
    } else {
      m--;
      if (m <= 0) {
        p = i;
        m = i * 2;
        i++;
      }
    }
  }

  cout << ((p == 0) ? "Motu" : "Patlu") << endl;

  return 0;
}