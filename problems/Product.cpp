#include <iostream>
using namespace std;
int main(){
    int l,r,m;
    cin>>l>>r>>m;
    long long p=1;
    for (int i = l; i <= r; i++)
    {
        p*=i;
        p%=m;
    }
    cout<<p;
}