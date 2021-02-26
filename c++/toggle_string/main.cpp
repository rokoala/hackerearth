#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        
        cout.put((islower(s[i]) ? toupper(s[i]) : tolower(s[i]) ));
    }
    return 0;
}
