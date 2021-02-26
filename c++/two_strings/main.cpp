#include <algorithm>
#include <iostream>

using namespace std;

string check(string str1, string str2) {
  if (str1.length() != str2.length()) {
    return "NO";
  }

  for (int i = 0; i < str1.length(); i++) {
    if (count(str2.begin(), str2.end(), str1[i]) !=
        count(str1.begin(), str1.end(), str1[i])) {
      return "NO";
    }
  }

  return "YES";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  while (n--) {
    string str1, str2;
    cin >> str1 >> str2;

    cout << check(str1, str2) << endl;
  }
}