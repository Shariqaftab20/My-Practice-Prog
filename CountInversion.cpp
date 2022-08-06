#include<iostream>
using namespace std;
long long merge(int a[],int l,int mid,int r)
{
    long long inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
    int A[n1],B[n2];
    for(int i=0;i<n1;i++)
    {
        A[i]=a[i+l];
    }
    for(int i =0;i<n2;i++)
    {
        B[i]=a[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2 )
    {
        if(A[i]<=B[j])
        {
            a[k]=A[i];
            k++;i++;
        }
        else
        {
            a[k]=B[j];
            inv+=n1-i;
            k++; j++;
        }
    }
    while(i<n1)
    {
        a[k]=A[i];
        k++;i++;
    }
    while(j<n2)
    {
        a[k]=B[j];
        k++;j++;
    }
    return inv;
}
long long countInversion(int a[8],int l,int r)
{
    long long inv=0;
    if(l<r)
    {
        int mid=(l+r)/2;
    inv+=countInversion(a,l,mid);
    inv+=countInversion(a,mid+1,r);
    inv+=merge(a,l,mid,r);
    }
    return inv;
}
int Brute(int a[],int n)
{
    int c=0;
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;i++)
    {
        if(a[i]>a[j])
        c++;
    }
    return 10;
}
int main()
{
 int a[]={3,1,5,7,9,2,4,6};
 //cout<<Brute(a,8)<<endl;
 cout<<countInversion(a,0,7);
return 0;
}