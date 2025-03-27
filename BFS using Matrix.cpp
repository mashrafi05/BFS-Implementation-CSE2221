#include <bits/stdc++.h>
using namespace std;
int n,e;
int graph[1000][1000];
int visit[1000];

void BFS(int source){
    visit[source]=1;
    cout<<source<<" ";
    queue<int>q;
    q.push(source);
    while(!q.empty()){
        int x= q.front();
        q.pop();
        for(int j=1; j<=n; j++){
            if(graph[x][j]!=0&&visit[j]==0){
                visit[j]=1;
                cout<<j<<" ";
                q.push(j);
            }
        }


    }
}


int main(){
    cin>>n>>e;


    int u,v;
    for(int i=1; i<=e; i++){
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
    }

    BFS(1);





}

