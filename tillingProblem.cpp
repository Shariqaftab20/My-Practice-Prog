#include<iostream>
using namespace std;
int tilling(int n )
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return tilling(n-1)+tilling(n-2);
}
int main()
{
    int n ;
    cin>>n;
    cout<<tilling(n);
return 0;
}
// you are given a a zone of size 2XN you have to set tiles on it such that they can only be set either horizontally or vertically .Find the possible way to set tiles on it 
