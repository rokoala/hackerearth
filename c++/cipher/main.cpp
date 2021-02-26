#include <iostream>

using namespace std;

int main() {
  string str;
  int n;

  cin >> str >> n;

  for (int i = 0; i < str.length(); i++) {
    if (str[i] != '.' && str[i] != ':' && str[i] != '-' && str[i] != ';' &&
        str[i] != '%' && str[i] != '@' && str[i] != '/') {
      if (isdigit(str[i])) {
        cout << (((str[i] - '0') + n) % 10);
      } else {
        int next = str[i] + (n % 26);

        if ((str[i] >= 65 && str[i] <= 90 && next > 90) ||
            (str[i] >= 97 && str[i] <= 122 && next > 122)) {
          next -= 26;
        }

        cout << (char)(next);
      }
    } else {
      cout << str[i];
    }
  }
  return 0;
}