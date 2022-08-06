#include<iostream>
using namespace std;
void revstring(string a , int n )
{
   if(n==-1)
    return ;
    cout<<a[n]<<endl;
    revstring(a,n-1);
}

int main()
{
    revstring("Shariq",6);
 return 0;   
}