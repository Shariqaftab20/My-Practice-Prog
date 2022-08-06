#include<iostream>
using namespace std;
void Sort(int a[11])
{
    int low=0,mid=0,high=10;
    while(mid!=high)
    {
        if(a[mid]==0)
        {
            swap(a[mid],a[low]);
            mid++;low++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else if(a[mid]==2)
        {
            swap(a[mid],a[high]);
            high--;
        }
    }
}
int main()
{
int a[]={1,0,0,1,0,1,2,2,1,0,1};
    Sort(a);
    for(int i=0;i<=10;i++)
    cout<<a[i]<<" ";
return 0;
}