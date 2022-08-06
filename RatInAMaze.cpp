#include<iostream>
using namespace std;
bool isPossible(int a[3][3],int x,int y,int n)
{
    if(x<n&&y<n&&a[x][y]==1 )
    return true;
    return false;
}

bool Maze(int maze[3][3],int x,int y,int n,int sol[3][3])
{+
    if (x==n-1 && y==n-1)
    {
        sol[x][y]=1;
    return true ;
    }
    if(isPossible(maze,x,y,n))
    {
        sol[x][y]=1;
        if(Maze(maze,x+1,y,n,sol))
        {return true;}
        if(Maze(maze,x,y+1,n,sol))
        {return true;}
    }
    sol[x][y]=0;
    return false;
}
int main()
{
    int maze[3][3]={{1,0,1},
                   {1,1,1},
                   {1,0,1}};
    int sol[3][3]={{0,0,0},
                   {0,0,0},
                   {0,0,0}};
    cout<<Maze(maze,0,0,3,sol)<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<sol[i][j];
        }
        cout<<endl;

















    }
return 0;
}