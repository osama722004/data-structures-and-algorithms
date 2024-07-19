#include <iostream>
using namespace std;
int c;
int suq(int n){

    if (n==1)
    {
        c++;
        return c;
    }
    if (n%2==0)
    {
        c++;
        return suq(int(n/2));
    }else
    {
        c++;
        return suq(3*n+1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<suq(n);
}