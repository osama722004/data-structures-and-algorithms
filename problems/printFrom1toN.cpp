#include <iostream>
using namespace std;
void printFrom1ToN(int s,int n){
    cout<<s<<endl;
    if (s==n)
    {
        return;
    }
    printFrom1ToN(s+1,n);
}
int main(){
    int n;
    cin>>n;
    printFrom1ToN(1,n);
}