#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int sh, sm, eh, em;
        int rh, rm;

        cin >> sh >> sm >> eh >> em;

        if (em < sm)
        {
            eh--;
            em = em + 60;
        }

        rh = eh - sh;
        rm = em - sm;

        cout << rh << " " << rm << endl;
    }

    return 0;
}
