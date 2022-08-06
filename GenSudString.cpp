#include<iostream>
using namespace std;
void AllSub(string s ,string ans )
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    } 

    char ch=s[0];
    AllSub(s.substr(1),ans);
    AllSub(s.substr(1),ans+ch);


}
int main()
{
  AllSub("ABC","");
  return 0;
}