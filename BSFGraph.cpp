#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>ExpoQ;
    int visited[7]={0,0,0,0,0,0,0};
    int i=0;
    int Graph[7][7]={
        {0,1,1,1,0,0,0},
        {1,0,0,1,0,0,0},
        {1,0,0,0,1,0,0},
        {1,1,0,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
    };
    cout<<i<<" -> ";
    visited[i]=1;
    ExpoQ.push(i);
    while(!ExpoQ.empty())
    {
        int node=ExpoQ.front();
        ExpoQ.pop();
        for(int j=0;j<7;j++)
        {
            if(Graph[node][j]==1 && visited[j]==0)
            {
                //cout<<"MKB"<<endl;
                cout<<j<<" -> ";
                ExpoQ.push(j);
                visited[j]=1;
            }
        }
    }

return 0;
}