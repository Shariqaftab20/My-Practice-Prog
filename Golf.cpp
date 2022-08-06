// #include<iostream>
// using namespace std;
// int main()
// {
// 	int N,K,count=0;
// 	cin>>N>>K;
// 	int arr[N];
//    for(int i=0;i<N;i++)
// 	{
// 		cin>>arr[i];
// 	}
// 	for(int i=0;i<N;i++)
// 	{  
//         for(int j=0;j<N;j++){
// 	        if(i!=j){
// 		        if(arr[i]%K==arr[j]%K)
// 		        {
// 			        count++;
// 		        }
// 		    }
// 		//count--;
// 	    }
//     }
// 	cout<<"strength "<<count;
// }

#include <iostream>
using namespace std;

int main ()
{
  int n, k;
  cin >> n >> k;
  int A[n];
  for (int i = 0; i < n; i++)
    {
      cin >> A[i];
    }
  int Ar[n];
  for (int i = 0; i < n; i++)
    {
      Ar[i] = (A[i] % k);
    }
  int s = 0;
  for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
	{
	  if (Ar[i] == Ar[j])
	    {
	      s = s + 2;
	    }
	}
    }
  cout << s << endl;

  return 0;
}