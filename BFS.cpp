#include <iostream>
using namespace std;
#include<queue>
void bfs(int **g,int n,int sv,bool *visited)
{
    queue<int>q;
    q.push(sv);
    visited[sv]=true;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        int s=q.front();
      
        q.pop();
        for(int i=0;i<n;i++)
        {
            if(i==s)
                continue;
           if(g[s][i]==1)
           {
               if(visited[i]==true)
                   continue;
               else
               {q.push(i);
               visited[i]=true;
               
               }
           }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
            bfs(g,n,i,visited);
            
    }
}
int main() {
    int V, E;
    cin >> V >> E;
int **g=new int *[V];
    for(int i=0;i<V;i++)
    {
        g[i]=new int[V];
        for(int j=0;j<V;j++)
            g[i][j]=0;
    }
    for(int i=0;i<E;i++)
    {
        int s,f;
        cin>>s>>f;
        g[s][f]=1;
        g[f][s]=1;
    }
    bool *visited=new bool [V];
    for(int i=0;i<V;i++)
        visited[i]=false;
   bfs(g,V,0,visited);
delete  [] visited;
  for(int i=0;i<V;i++)
   delete [] g[i];
  delete [] g;
  return 0;
}