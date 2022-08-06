#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,*arr,*sol;
	cin>>t;
	int N,K;
	while(t--)
	{
	    cin>>N>>K;
        arr = new int[N+1];
		sol = new int[N+1];
	    for(int i=0;i<=N;i++)
	    {arr[i]=i;}
	    while(K--)
	    {
			int oddIndex=1 , evenIndex=(N/2)+1;
	    	for(int i=1;i<=N;i++)
			{
				if(i%2==0)
				{sol[evenIndex]=arr[i];
				evenIndex++;}
				else
				{sol[oddIndex]=arr[i];
				oddIndex++;}
			}
			for(int i=1;i<=N;i++)
			{
				arr[i]=sol[i];
			}
		
	    }
		for(int i=1;i<=N;i++)
			{
				cout<<arr[i]<<" ";
			}
		
	}
	return 0;
}