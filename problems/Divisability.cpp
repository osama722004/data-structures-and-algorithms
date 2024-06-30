#include <iostream>
using namespace std;
int main(void){
    long long a,b,c;
    cin>>a>>b>>c;
    if (a>b)
    {
        swap(a,b);
    }
    /*
    فكرتها
    هجيب عدد الارقام اللي تقبل القسمة على السي واضرب فيها علشان اجيب مجموعهم
    */
    b=b/c;
    b=(b*(b+1)/2)*c;
    a--;
    a=a/c;
    a=(a*(a+1)/2)*c;
    cout<<b-a;
}