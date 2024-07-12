#include <iostream> 
using namespace std; 
unsigned long long factorial(unsigned int n) 
{ 
    if (n == 0 || n == 1) 
        return 1; 
    return n * factorial(n - 1); 
} 
  
int main() 
{ 
    int num = 5; 
    cin>>num;
    cout <<factorial(num); 
    return 0; 
} 