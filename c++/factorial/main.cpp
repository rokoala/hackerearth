#include <iostream>

using namespace std;

int main() {
    int n,result;
    cin >> n;
    result = n;
    for(n=n-1; n>=1; --n) {
        result *= n;
    }
    cout << result << endl;
}
