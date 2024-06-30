#include <iostream> 
using namespace std;
int main(){
    int num=36;
    for (int  i = 2; i*i <= num; i++)
    {
        while (num%i==0)
        {
            num/=i;
            cout<<i<<' ';
        }
        
    }
    if (num!=1)
    {
        cout<<num;
    }
}