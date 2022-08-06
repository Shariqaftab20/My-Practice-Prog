#include<iostream>
using namespace std;
string moveX(string a)
{
    if(a.length()==0)
    {
        return "";
    }
    char s=a[0];
    string ans=moveX(a.substr(1));
    if(s=='x')
    return ans+'x';
    return s+ans;
}
int main()
{
 cout<<moveX("axxaxhxjfxbfxyxrx");
return 0;
}