#include <iostream>
#include <stack>

using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();
    int ndivisor = len/2;

    stack<char> sub1;
    for(int i=0; i<ndivisor; i++) {
        sub1.push(str[i]);
    }

    int adjust = (len % 2) ? 1 : 0;

    for(int i=ndivisor+adjust; i<len; i++) {
        if(sub1.top() != str[i]) {
            cout << "NO" << endl;
            return 0;
        }
        sub1.pop();
    }

    cout << "YES" << endl;

    return 0;
}
