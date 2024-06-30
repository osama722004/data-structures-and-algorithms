#include <iostream>
using namespace std;
#define ll long long
int modularExponentiation(int x,int n,int m)
{
    int result=1;
    while(n>0)
    {
        if(n%2==1){result=(result*x)%m;}
        x=(x*x)%m;
        n=n/2;
    }
    return result;
}
ll mul(ll a,ll b,ll m)
{
  return ((a%m)*(b%m))%m;
}
ll modularExponentiation_optmization(ll x,ll n,ll m)
{
    ll result=1;
    while(n>0)
    {
        if(n%2==1){result=mul(result,x,m);}
        x=mul(x,x,m);
        n=n/2;
    }
    return result;
}
int main(void){
    int num=5,power=2,mod=3;
    cout<<modularExponentiation(num,power,mod);
}