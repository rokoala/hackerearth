#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;

  cin >> n;

  string result, value;
  while (n--) {
    cin >> value;
    result += value.back();
  }

  cout << ((result.length() < 10) ? "No"
                                  : (result.back() == '0') ? "Yes" : "No");
}