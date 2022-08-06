#include<iostream>
using namespace std;
int NoOfWays(int s,int e)
{
    if(s==e)
    return 1;
    if(s>e)
    return 0;
    int c=0;
    for(int i=1;i<=6;i++)
    c+=NoOfWays(s+i,e);
    return c;
}
int main()
{
    int s,e;
    cin>>s>>e;
    cout<<"No of ways to reach Target : "<<NoOfWays(s,e);
return 0;
}