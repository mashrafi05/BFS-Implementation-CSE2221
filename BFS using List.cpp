//BFS LIST
#include<bits/stdc++.h>
using namespace std;
int visit[1000];
int n,e;
vector<int>graph[1000];
void BFS(int source)
{
    visit[source]=1;
    cout<<source<<" ";
    queue<int>q;
    q.push(source);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int j=0;j<graph[x].size();j++)
        {
            int node=graph[x][j];
            if(visit[node]==0)
            {
                visit[node]=1;
                cout<<node<<" ";
                q.push(node);

            }
        }
    }
}
int main ()
{
    cin>>n>>e;
    int u,v;
    for(int i=1 ;i<=e ;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    BFS(1);
}
