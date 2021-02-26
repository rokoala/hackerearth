#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

int main() {
    int n,value;
    ll result=1;

    cin >> n;
    while(n--) {
        cin >> value;
        result = (result*value) % (1000000007);
    }
    cout << result << endl;
}
