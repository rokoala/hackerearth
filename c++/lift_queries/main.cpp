#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a=0;
    int b=7;
    while(n--) {
        int floor,da,db;
        cin >> floor;

        if(abs(floor-a) < abs(floor-b)) {
            cout << "A"<<endl;
            a=floor;
        } else if(abs(floor-a) > abs(floor-b)) {
            cout << "B"<<endl;
            b=floor;
        } else {
            if (a < b) {
                cout << "A" << endl;
                a=floor;
            } else {
                cout <<"B"<<endl;
                b=floor;
            }
        }
    }
    return 0;
}
