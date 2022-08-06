#include<iostream>
using namespace std;
void AllSubWithASCII(string s ,string ans )
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    } 

    char ch=s[0];
    int code= ch;
    AllSubWithASCII(s.substr(1),ans);
    AllSubWithASCII(s.substr(1),ans+ch);
    AllSubWithASCII(s.substr(1),ans+to_string(code));
    


}
int main()
{
  AllSubWithASCII("AB","");
  return 0;
}