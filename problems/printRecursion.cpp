#include <iostream>
using namespace std;
void printRecursion(int n){
    printf("I love Recursion\n");
    if (n==1)
    {
        return;
    }
    printRecursion(n-1);
}
int main(){
    int n;
    cin>>n;
    printRecursion(n);
}