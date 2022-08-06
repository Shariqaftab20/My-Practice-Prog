#include<bits/stdc++.h>
#include<array>
using namespace std;
void swap(int a[],int i,int j)
{
     int temp=a[i];
     a[j]=a[i];
     a[i]=temp;
}
int Partition(int a[],int l,int r)
{
    int pivot=a[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
    if (a[j]<=pivot)
     i++;
    swap(a,i,j);
    }
    swap(a,i+1,r);
    return i+1;


}
void quickSort(int a[],int l,int r)
{
    if(l<r)
    {
        int pos=Partition(a,l,r);
        quickSort(a,l,pos-1);
        quickSort(a,pos+2,r);
    }
}
int main()
{
     int a[]={1,5,3,7,9,2,4,6};
    quickSort(a,0,7);
    for(int i=0;i<=7;i++)
    cout<<a[i]<<" ";
return 0;
}