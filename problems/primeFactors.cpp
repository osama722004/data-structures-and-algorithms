#include <iostream>
using namespace std;
int arr[20000000+1]={0};
int main(){
    int num;
    int temp;
    cin>>num;
    temp =num;
    for (int i = 2; i*i <= temp; i++)
    {
        while (temp%i==0)
        {
            temp/=i;
            arr[i]++;
        }
    }
    if (temp!=1)
    {
        arr[temp]++;
    }
    bool done=false;
    for (int i = 2; i <= num; i++)
    {
        if (done&&arr[i]!=0)
        {
            cout<<'*';
        }
        if (arr[i]!=0)
        {
            done=true;
            cout<<'('<<i<<'^'<<arr[i]<<')';
        }
    }
}