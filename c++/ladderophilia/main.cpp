#include <iostream>

using namespace std;

void print_base() {
  cout << "*   *" << endl;
  cout << "*   *" << endl;
}

void print_stair() {
  print_base();
  cout << "*****" << endl;
}

int main() {
  int n;
  cin >> n;
  while (n--) {
    print_stair();
  }
  print_base();
}