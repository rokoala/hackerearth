#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  ll result = 0;
  vector<ll> a(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    result += a[i];
  }

  int remove_element = (result % 7);

  ll minvalue = 999999999;
  ll index = -1;

  for (int i = 0; i < n; i++) {
    if (a[i] % 7 == remove_element) {
      if (a[i] < minvalue) {
        minvalue = a[i];
        index = i;
      }
    }
  }

  cout << ((index >= 0) ? index : -1) << endl;
}