#include<iostream>
using namespace std;

int dx[4]={2,-2,1,-1},dy[4]={1,1,2,2};
int sum,m,n;

void dfs(int x,int y)
{
    if(x==n&&y==m)
    {
        sum++;
        return;
    }
    else 
        for(int i=0;i<=3;i++)
        {
            int tx=x+dx[i];
            int ty=y+dy[i];
            if(tx>=0&&tx<=n&&ty>=0&&ty<=m)
                dfs(tx,ty);
        }           
}

int main()
{
    cin>>n>>m;
    dfs(0,0);
    cout<<sum;
    return 0;
}
