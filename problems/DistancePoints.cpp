#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    double a1=pow((y2-y1),2);
    double a2=pow((x2-x1),2);
    double res=sqrt(a1+a2);
    cout<<fixed<<setprecision(9)<<res;
}