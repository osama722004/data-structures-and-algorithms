#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n]={0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j==0||j==i)
            {
                arr[i][j]=1;
                cout<<arr[i][j]<<" ";
            }
            else
            {
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}