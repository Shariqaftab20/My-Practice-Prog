#include<iostream>
using namespace std;
int pairFriends(int n )
{
    if(n==0 || n==1 || n==2)
    return n;
    else
    return pairFriends(n-1)+pairFriends(n-2)*(n-1);

}
int main()
{
    int n ;
    cin>>n;
cout<<pairFriends(n);
return 0;
}