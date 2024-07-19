#include <iostream>
int c=0;
long long log(long long n){
    if (n==1)
    {
        return c;
    }
    c++;
    return log(n/2);
}

using namespace std;
int main(){
    long long n;
    cin>>n;
    cout<<log(n);
}