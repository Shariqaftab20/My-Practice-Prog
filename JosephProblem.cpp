#include<iostream>
using namespace std;
int Jose(int n, int k)
{
    if(n==1)
    return 0;
    return (Jose(n-1,k)+k)%n;
}
int main()
{
    int n,k;
    cout<<"enter the number of player and the count to kill. ";
    cin>>n>>k;
    cout<<"Winner is player Number : "<<Jose(n,k);
return 0;
}