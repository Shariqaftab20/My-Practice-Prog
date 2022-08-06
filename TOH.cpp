#include<iostream>
using namespace std;
void towerofhanoi(int n,char src, char dst,char helper)
{
    if(n==0)
    return;
    towerofhanoi(n-1,src,helper,dst);
    cout<<"Move from "<<src<<" to "<<dst<<endl;
    towerofhanoi(n-1,helper,dst,src);
}
int main()
{
towerofhanoi(3,'A','C','B');
return 0;
}