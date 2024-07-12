#include<iostream>
#include <string>
using namespace std;
string s;
int countVowels(int i,int vCount){
    int vcount=vCount;
    if (i==-1)
    {
        return vcount;
    }
    
    if (s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='u'||s[i]=='o'||s[i]=='A'||s[i]=='I'||s[i]=='E'||s[i]=='U'||s[i]=='O'){
        vcount++;
    }
        return countVowels(--i,vcount);
}
int main(){
    getline(cin,s);
    int scount=s.length();
    cout<<countVowels(scount-1,0);
}