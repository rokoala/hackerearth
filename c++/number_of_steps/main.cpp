#include <iostream>

using namespace std;

int is_possible(int a[], int b[], int min, int n) {
  int steps = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > min) {
      int value = a[i];
      while (value > min) {
        steps++;
        value -= b[i];
      }

      if (value < min) {
        return -1;
      }
    }
  }

  return steps;
}

int main() {
  int n, i;

  cin >> n;

  int a[n], b[n];

  int amin = 9999;
  int bmin, bmin_index;
  for (i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] < amin) {
      amin = a[i];
      bmin_index = i;
    }
  }

  for (i = 0; i < n; i++) {
    cin >> b[i];
  }
  bmin = b[bmin_index];

  int aux;
  aux = amin;

  if (bmin == 0) {
    cout << is_possible(a, b, aux, n) << endl;
    return 0;
  } else {
    while (aux - bmin >= 0) {
      int steps = is_possible(a, b, aux, n);
      if (steps >= 0) {
        cout << steps << endl;
        return 0;
      }
      aux -= bmin;
    }
  }
  cout << "-1" << endl;
  return 0;
}