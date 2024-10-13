#include<bits/stdc++.h>
using namespace std;
const int N=2e5;
vector<int>g[N];

bool vis[N];
int depth[N];
int height[N];
int level[N];
void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=1;

    while(!q.empty()){
        int v=q.front();
        q.pop();

        for(auto child: g[v]){
            if(!vis[child])
            level[child]=level[v]+1;
            q.push(child);
        }
    }
}

void dfs(int vertex){
    //take action on vertext after entering the vertext
vis[vertex]=1;
cout<<"IN"<<vertex<<endl;
for(auto child: g[vertex]){
    if(vis[child])continue;
    depth[child]=depth[vertex]+1;
    //take action on child before entering the child node
    dfs(child);
    height[vertex]=max(height[vertex],height[child]+1);
//take action on child after entering the child

}
//take action on vertext before exiting the vertext
cout<<"OUt"<<vertex<<endl;
}

int main(){
   int n,e;
    cin>>n>>e;
    
    for (int i = 1; i<= e; i++)
    {   int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    /*for(int i=1;i<=n;i++){
        cout<<"node"<<i<<":";
        for (auto x:g[i])
        {
             cout<<x<<" ";

        }
        cout<<endl;
    

    }*/


   /*

   //input section
    int node,edge;

    cin>>node>>edge;


    unordered_map<int,vector<int>>adj;
    int u,v;

    for (int i = 0; i < edge; i++)
    {
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

   for (auto i:adj)
   {
    cout<<"NODE:"<<i.first<<" ";
    for (auto x : i.second)
    {
        cout<<x<<" "; 
    }
    cout<<endl;
    
   }
   */
   
dfs(1);
}