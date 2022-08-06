#include<iostream>
using namespace std;

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

void DFS(int i)
{
    cout<<i<<" -> ";
    visited[i]=1;
    for(int j=0;j<7;j++)
    {
        if(Graph[i][j]==1 && visited[j]==0)
        DFS(j);
    }
}
int main()
{
 DFS(1);
return 0;
}