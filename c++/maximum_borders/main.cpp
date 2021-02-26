#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;

    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        char *table = new char[n * m];

        int max = 0;
        char value;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> value;
                *(table + i * m + j) = value;
            }

        char currentchar;
        int count;
        int rowMax = 0;
        for (int i = 0; i < n; i++)
        {
            char lastchar = '0';
            for (int j = 0; j < m; j++)
            {
                currentchar = *(table + i * m + j);
                if (currentchar == '#' && lastchar == '#')
                {
                    count++;
                    if (count > rowMax)
                        rowMax = count;
                }
                else
                {
                    if (currentchar == '#')
                        count = 1;
                    else
                        count = 0;
                }

                lastchar = currentchar;
            }
        }

        int columnMax = 0;
        count = 0;
        for (int i = 0; i < n; i++)
        {
            char lastchar = '0';
            for (int j = 0; j < m; j++)
            {
                currentchar = *(table + i * m + j);
                if (currentchar == '#' && lastchar == '#')
                {
                    count++;
                    if (count > columnMax)
                        columnMax = count;
                }
                else
                {
                    if (currentchar == '#')
                        count = 1;
                    else
                        count = 0;
                }

                lastchar = currentchar;
            }
        }

        cout << ((rowMax > columnMax) ? rowMax : columnMax) << endl;

        delete[] table;
    }
    return 0;
}
