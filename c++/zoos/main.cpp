#include <iostream>

using namespace std;

int main() {
    string str;

    cin >> str;
    int ocount=0;
    for(int i=0; i<str.length(); i++) {
        if(str[i]=='z')
            ocount+=2;
        else if(str[i]=='o')
            ocount--;
        if(ocount < 0) {
            cout << "No" <<endl;
            return 0;
        }
    }
    if(ocount > 0)
        cout << "No"<<endl;
    else
        cout << "Yes" << endl;
    return 0;
}
