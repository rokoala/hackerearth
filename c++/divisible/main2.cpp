#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,c,rem;
    cin>>n;
    int x;
    int mid=n/2;

    for(int i=0; i<n; i++){
        cin>>x;

        if(i<mid){
            while(x!=0){
                rem=x%10;
                x/=10;
            }
            sum=i%2==0?sum+rem:sum-rem;
        }
        else
            sum=i%2==0?sum+x%10:sum-x%10;
    }

    if(sum%11==0)
        cout<<"OUI"<<endl;
    else
        cout<<"NON"<<endl;

    return 0;
}
