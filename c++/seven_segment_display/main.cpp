#include <iostream>
#include <map>

using namespace std;

int main() {
  map<int, int> display;
  display.insert(pair<int, int>(0, 6));
  display.insert(pair<int, int>(1, 2));
  display.insert(pair<int, int>(2, 5));
  display.insert(pair<int, int>(3, 5));
  display.insert(pair<int, int>(4, 4));
  display.insert(pair<int, int>(5, 5));
  display.insert(pair<int, int>(6, 6));
  display.insert(pair<int, int>(7, 3));
  display.insert(pair<int, int>(8, 7));
  display.insert(pair<int, int>(9, 6));

  int t;
  cin >> t;
  while (t--) {
    string value;
    cin >> value;

    long long int total = 0;
    for (int i = 0; i < value.length(); i++) {
      total += display.at(value[i] - '0');
    }

    string result = "";
    if (total % 2) {
      total -= 3;
      result += '7';
      for (int i = 0; i < total / 2; i++) result += '1';
    } else {
      for (int i = 0; i < total / 2; i++) result += '1';
    }
    cout << result << endl;
  }
  return 0;
}