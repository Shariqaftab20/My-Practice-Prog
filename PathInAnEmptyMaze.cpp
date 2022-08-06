#include<iostream>
using namespace std;
int  Path(int n,int i,int j)
{
    if(i==n-1&&j==n-1)
    return 1;
    if(i>=n||j>=n)
    return 0;

    return Path(n,i+1,j)+Path(n,i,j+1);
}
int main()
{
    int  n ;
    cin>>n;
cout<<Path(n,0,0);
return 0;
}