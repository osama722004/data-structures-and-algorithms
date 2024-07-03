#include <iostream>
#include <string>
using namespace std;
string doSum(string a, string b)
{
    if(a.size()==0)return b;
    if(b.size()==0)return a;

    int len1=a.length();
    int len2=b.length();

    int carry=0;

    string res(len1+len2,'0');
    int lensRes=res.size()-1;
    while (len1>0||len2>0)
    {
        int n1=0;
        if (len1>0)
        {
            n1=a[len1-1]-'0';
            len1--;
        }
        int n2=0;
        if (len2>0)
        {
            n2=b[len2-1]-'0';
            len2--;
        }
        int sum=n1+n2+carry;
        res[lensRes]=sum%10+'0';
        carry=sum/10;
        lensRes--;
    }
    if (!len1>0||!len2>0)
    {
        res[lensRes]=carry+'0';
    }
    string finalRes="";
    for (int i = 0; i < res.length(); i++)
    {
        if (res[i]!='0')
        {
            finalRes=res.substr(i);
            break;
        }
    }
    
    return finalRes;
    // if(a.size() < b.size())
    //     swap(a, b);

    // int j = a.size()-1;
    // for(int i=b.size()-1; i>=0; i--, j--)
    //     a[j]+=(b[i]-'0');

    // for(int i=a.size()-1; i>0; i--)
    // {
    //     if(a[i] > '9')
    //     {
    //         int d = a[i]-'0';
    //         a[i-1] = ((a[i-1]-'0') + d/10) + '0';
    //         a[i] = (d%10)+'0';
    //     }
    // }
    // if(a[0] > '9')
    // {
    //     string k;
    //     k+=a[0];
    //     a[0] = ((a[0]-'0')%10)+'0';
    //     k[0] = ((k[0]-'0')/10)+'0';
    //     a = k+a;
    // }
    // return a;
}
string multiply(string nums1, string nums2) {
   int n = nums1.size();
   int m = nums2.size();
   string ans(n + m, '0');
   for(int i = n - 1; i>=0; i--){
      for(int j = m - 1; j >= 0; j--){
         int p = (nums1[i] - '0') * (nums2[j] - '0') + (ans[i + j + 1] - '0');//1 + 9 + 0
         ans[i+j+1] = p % 10 + '0';
         ans[i+j] += p / 10 ;
      }
   }
   for(int i = 0; i < m + n; i++){
      if(ans[i] !='0')return ans.substr(i);
   }
   return "0";
}
int main()
{
    string num;
    cin>>num;
    string addtion = doSum(num, "9999");
    string multiplication=multiply(num,"9999");
    cout <<addtion ;
}