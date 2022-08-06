#include<iostream> 
using namespace std;

bool sorted(int arr[],int n)
{
     if(n==1)
     {
         return true;
     }
     else{
        bool restArray = sorted(arr+1,n-1);
        if(arr[0]<arr[1] && restArray)
        {
         return true;
        }
        else 
       {
         return false;
       }
     }
}
int main()
{
    int arr[]={1,2,3,4,5};
    bool x= sorted(arr,5);
    cout<<x<<endl;
    return 0;
}