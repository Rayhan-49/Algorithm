#include<bits/stdc++.h>
using namespace std;

unordered_map<int,vector<int>>adj;
 unordered_map<int,bool>visited1;

  unordered_map<int,int>sum;
  unordered_map<int,int>ct;

 void dfs1(int source){

    if(source%2==0)
    ct[source]++;

 sum[source]+=source;

visited1[source]=true;
for (auto i : adj[source])
{
    if(visited1[i]==true)
    continue;

    dfs1(i);
    sum[source]=sum[source]+sum[i];
    ct[source]+=ct[i];

}

}

 

void dfs(int source){

 cout<<source<<" ";

visited1[source]=true;
for (auto i : adj[source])
{
    if(visited1[i]==true)
    continue;

    dfs(i);
}

}


void bfs(int source){

     vector<int>ans;
    unordered_map<int,bool>visited;

    queue<int>q;

    q.push(source);
    visited[source]=1;

    while(!q.empty()){

       int frontNode=q.front();
        q.pop();
         

ans.push_back(frontNode);

        for (auto i : adj[frontNode])
        {
            if(visited[i]==0){
            q.push(i);
            visited[i]=1;
            }
        }
  
    }

    for ( auto i:ans)
    {
        cout<<i<<" ";
    }
}





int main(){

    int node,edge;

    cin>>node>>edge;


    
    int u,v;

    for (int i = 0; i < edge; i++)
    {
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

  /*for (auto i:adj)
   {
    cout<<"NODE:"<<i.first<<" ";
    for (auto x : i.second)
    {
        cout<<x<<" "; 
    }
    cout<<endl;
    
   }*/
   
   //dfs(3);

   dfs1(1);
    
/*for (auto i : sum)
{
    cout<<i.second<<" ";
}*/

int q;
cin>>q;

while(q--){
    int v;
    cin>>v;

    cout<<sum[v]<<" "<<ct[v]<<" ";

}
    
    return 0;
}