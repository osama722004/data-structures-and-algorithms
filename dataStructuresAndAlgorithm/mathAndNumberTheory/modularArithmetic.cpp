#include <iostream>
using namespace std;

//(a+b)%c
long long add(int a,int b,int c){
    return ((a%c)+(b%c))%c;
}

//(a-b)%c
long long sub(int a,int b,int c){
    return ((a%c)-(b%c)+c)%c;
}
//(a*b)%c
long long mul(int a,int b,int c){
    return ((a%c)*(b%c))%c;
}
//(a/b)%c
long long div(int a,int b,int c){
    return ((a%c)/(b%c))%c;
}