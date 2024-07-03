#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    double size=0;
    for (int i = 2; i <= n; i++)
    {
        size+=log10(i);
    }
    cout<<"Number of digits of "<<n<<"! is "<<(int)size+1;
}