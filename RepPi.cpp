#include<iostream>
using namespace std;
void ReplacePi(string a)
{
    if(a.length()==0)
    return;
    if(a[0]=='p'&&a[1]=='i')
    {
    cout<<"3.14";
    ReplacePi(a.substr(2));
    }
    else{
        cout<<a[0];
        ReplacePi(a.substr(1));
    }

}
int main()
{
    cout<<"pi p pi ipp pi"<<endl;
  ReplacePi("pippiipppi");
  return 0;  
} 
