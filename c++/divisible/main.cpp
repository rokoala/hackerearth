#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    string resultNumber;

    cin >> n;
    int half = n/2;
    while(n--){
        string number;
        cin >> number;
        
        if(n >= half) 
            resultNumber+=number.at(0);
        else
            resultNumber+=number.at(number.length()-1);
    }
    
    int result,aux=1;
    for(int i=0;i<resultNumber.length();i++){
        result += aux*((int)(resultNumber[i]));
        aux *= -1;
    }

    cout << (result % 11 ? "NON" : "OUI" )<<endl;
}
