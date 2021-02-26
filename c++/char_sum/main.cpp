#include <iostream>

using namespace std;

int main()
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string str;
    cin >> str;

    int result = 0;
    for (int i = 0; i < str.length(); i++)
    {
        result += alphabet.find(str[i]) + 1;
    }

    cout << result << endl;

    return 0;
}