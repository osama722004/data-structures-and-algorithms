#include <iostream>
using namespace std;
int main(){
    string s;
    int n;
    cin>>s>>n;
    long long res=0;
    for (int i = 0; i < s.size(); i++)
    {
        res*=10;
        res+=s[i]-'0';
        res%=n;
    }
    if (res==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}