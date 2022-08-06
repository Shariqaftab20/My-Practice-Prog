#include<iostream>
using namespace std;
string remDup(string a)
{
    if(a.length()==0)
    {
        return "";
    }
    char s=a[0];
    string ans=remDup(a.substr(1));
    if(s==ans[0])
    return ans;
    return s+ans;
}
int main()
{
 cout<<remDup("aaaaabbbbcccddddeee");
return 0;
}