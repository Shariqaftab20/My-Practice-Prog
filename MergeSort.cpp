#include<iostream>
using namespace std;
void merge(int a[],int l,int mid,int r)
{
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
        if(A[i]>B[j])
        {
            a[k]=B[j];
            k++;j++;
        }
        else
        {
            a[k]=A[i];
            k++; i++;
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
}

void mergeSort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}

int main()
{
    int a[]={1,5,3,7,9,2,4,6};
    mergeSort(a,0,7);
    for(int i=0;i<=7;i++)
    cout<<a[i]<<" ";
return 0;
}
/*
Time complexity :
T(n)=T(n/2)+T(n/2)+n
T(n/2)=T(n/4)+T(n/4)+n....
T(1)=1
therefore: number of levels = > n2^k=1
                            = > k=logn

here when we do cancelleation we get n from each term thus complete time complexity is

O(n log n).
*/