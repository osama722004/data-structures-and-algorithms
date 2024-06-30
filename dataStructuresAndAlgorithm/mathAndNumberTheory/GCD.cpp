#include <iostream>
using namespace std;
long long GCD(long long num1,long long num2){
    while (num2!=0)
    {
        long long temp=num1;
        num1=num2;
        num2=temp%num2;
    }
    return num1;
}

int main(void){
    cout<<GCD(30,60);
}