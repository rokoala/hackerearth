#include <iostream>

using namespace std;

int main() {
  string str;
  cin >> str;
  int result = 0;

  for (int i = 0; i < 10; i++) result += (str[i] - '0') * (i + 1);

  cout << ((result % 11) ? "Illegal ISBN" : "Legal ISBN") << endl;
}