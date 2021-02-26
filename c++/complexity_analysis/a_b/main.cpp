#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

using namespace boost::multiprecision;

using namespace std;

int main() {
  int512_t a, b;
  while (1) {
    cin >> a >> b;
    if (a == 0 && b == 0) {
      return 0;
    }
    cout << a + b << endl;
  }
}