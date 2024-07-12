#include <iostream>
using namespace std;
void printfromNto1(int n){
    if(n==1){
        cout<<1;
        return;
    }
    cout<<n<<" ";
    printfromNto1(n-1);
}
int main(){
    int n;
    cin>>n;
    printfromNto1(n);
}