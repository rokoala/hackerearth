#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    if (n == 1) {
      cout << "**";
    } else {
      int c, i;
      int w = ((2 * (n - 1)) + 2);

      for (i = 0; i < n; i++) {
        for (c = 0; c < (i + 1); c++) {
          cout << "*";
        }

        for (c = 0; c < w - 2 * (i + 1); c++) {
          cout << "#";
        }

        for (c = 0; c < (i + 1); c++) {
          cout << "*";
        }
        cout << '\n';
      }
    }
    cout << '\n';
  }

  return 0;
}