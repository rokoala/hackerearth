#include <iostream>

using namespace std;

typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, q;
  cin >> n >> q;

  ll *a = (ll *)calloc((n + 1), sizeof(ll));

  for (int i = 1; i <= n; i++) {
    ll t;
    cin >> t;

    a[i] = a[i - 1] + t;
  }

  while (q--) {
    ll l, r, res, sum = 0;
    cin >> l >> r;

    sum = a[r] - a[l - 1];

    res = sum / (r - l + 1);

    cout << res << endl;
  }
}