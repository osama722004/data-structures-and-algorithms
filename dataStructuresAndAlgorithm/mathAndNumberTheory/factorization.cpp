#include <iostream>
using namespace std;
int main(void){
    int num =50;
    for (int i=1;i*i<=num;i++)
    {
        if (num%i==0)
        {
            cout<<i<<" ";
            if (i*i!=num)
            {
                cout<<num/i<<' ';
            }
            cout<<endl;
        }
    }
    
}