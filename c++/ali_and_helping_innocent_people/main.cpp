#include <iostream>

using namespace std;

int main() {
  string str;

  cin >> str;

  if ((str[0] + str[1]) % 2 != 0) {
    cout << "invalid";
    return 0;
  }

  if (str[2] == 'A' || str[2] == 'E' || str[2] == 'I' || str[2] == 'O' ||
      str[2] == 'U' || str[2] == 'Y') {
    cout << "invalid";
    return 0;
  }

  if ((str[3] + str[4]) % 2 != 0 || (str[4] + str[5]) % 2 != 0) {
    cout << "invalid";
    return 0;
  }

  if ((str[7] + str[8]) % 2 != 0) {
    cout << "invalid";
    return 0;
  }

  cout << "valid";

  return 0;
}