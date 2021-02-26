#include <iostream>

using namespace std;

typedef long long ll;

ll sum_n(int n) { return n * (n - 1) / 2; }

int find_out_value(int value) {
  int i = 1;
  int j = 0;
  ll aux = sum_n(i);
  ll last = aux;

  while (value >= aux) {
    last = aux;
    aux = sum_n(++i);
  }

  return value - last;
}

ll sum_of_lasts(ll a[], int n, int size) {
  ll result = 0;

  for (int i = size - n; i < size; i++) {
    result += a[i];
  }

  return result;
}

int main() {
  int n;
  cin >> n;
  ll result[n];
  ll sumresult[n];
  ll a[n];

  ll max = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i == 0) {
      sumresult[0] = a[0];
    } else if (i > 0) {
      sumresult[i] = sumresult[i - 1] + a[i];
    }
    result[i] = 0;
  }

  result[0] = 0;
  for (int i = 0; i < n - find_out_value(n); i++) {
    result[0] += a[i];
  }

  cout << "sumresult:" << endl;
  for (int i = 0; i < n; i++) {
    cout << sumresult[i] << " ";
  }
  cout << endl;

  ll sum_left = 0;
  for (int i = 1; i < n; i++) {
    int num = find_out_value(n - i);

    cout << "num:" << num << endl;
    if (num == 0) {
      result[i] = sumresult[num - 1] - sumresult[i];
    } else {
      cout << " sumresult[n -num - 1]" << sumresult[n - num - 1] << endl;
      result[i] = sumresult[n - num - 1] - sumresult[i] -
                  (sumresult[num + 1] - sumresult[n]);
    }

    cout << "result[i]" << result[i] << endl;
    if (result[i] > max) {
      max = result[i];
    }
  }
  cout << max << endl;
}
