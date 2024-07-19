#include <iostream>
#include <algorithm>
using namespace std;
long long maxNum(int arr[],int n,long long mx){
    if (n==0)
    {
        return mx;
    }
    return maxNum(arr,n-1,max(mx,arr[n]));
}
int main(){
    int n;

    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<maxNum(arr,n-1,-100000000);
}