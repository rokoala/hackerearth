#include <iostream>

using namespace std;


bool isVowel(char ch) {
    if(ch == 'a'|| ch =='e'|| ch=='i'||ch=='o'||ch=='u')
        return true;
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        string str;
        cin >> n >> str;
        int count=0;

        if(n==1)
            cout << 0 <<endl;
        else {
            for(int i=1; i<n; i++) {
                if(isVowel(str[i]) && !isVowel(str[i-1]))
                    count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}
