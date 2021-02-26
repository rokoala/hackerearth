#include <iostream>

using namespace std;

typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;

  while (n--) {
    ll a, b, c, diff_b_a, diff_c_b;
    cin >> a >> b >> c;

    diff_b_a = b - a;
    diff_c_b = c - b;

    if (diff_c_b == diff_b_a)
      cout << "0" << endl;
    else {
      int diff = abs(diff_b_a - diff_c_b);

      if (diff % 2)
        cout << (diff / 2) + 1 << endl;
      else
        cout << diff / 2 << endl;
    }
  }
  return 0;
}