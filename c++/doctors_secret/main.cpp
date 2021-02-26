#include <iostream>

using namespace std;

int main() {
  int l, npages;
  cin >> l >> npages;

  cout << (l <= 23 && (npages >= 500) && (npages <= 1000)
               ? "Take Medicine"
               : "Don't take Medicine")
       << endl;
}