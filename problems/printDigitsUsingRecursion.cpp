#include <iostream>
using namespace std;
void printDigitsUsingRecursion(int n){
    string num;
    cin>>num;
    for (size_t i = 0; i < num.length(); i++)
    {
       cout<<num[i]<<" ";
    }
    
    if (n!=1)
    {
        cout<<endl;
    }
    if (n==1)
    {
        return;
    }
    printDigitsUsingRecursion(n-1);
}
int main(){
    int n;
    cin>>n;
    printDigitsUsingRecursion(n);
}