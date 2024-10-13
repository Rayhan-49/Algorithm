#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int N=1e9+10;
int vis[8][8];
int level[8][8];

int getx(string s){
    return s[0]-'a';
}
int gety(string s){
    return s[1]-'1';
}
bool isvalid(int x,int y){
    return x>=0 && y>=0 && x<8 && y<8;
}
vector<pair<int,int>>movement={
    {-1,2},{1,2},
    {-1,-2},{1,-2},
    {2,-1},{2,1},
    {-2,-1},{-2,1},
    };

int bfs(string source,string dest ) {
int sourceX=getx(source);
int sourceY=gety(source);
int destX=getx(dest);
int destY=gety(dest);

queue<pair<int,int>>q;
q.push({sourceX,sourceY});

vis[sourceX][sourceY]=1;
level[sourceX][sourceY]=0;
while(!q.empty()){
    pair<int,int>v=q.front();
    int x=v.first;int y=v.second;
    q.pop();
    for(auto move: movement){
        int childX=move.first+x;
        int childY=move.second+y;
        if(isvalid(childX,childY))continue;
        if(!vis[childX][childY]){
            q.push({childX,childY});
            level[childX][childY]=level[x][y]+1;
             vis[childX][childY]=1;


        }

    }

}
return level[destX][destY];

}


int main(){
    int t;cin>>t;
    while(t--){
string s,s1;
cin>>s>>s1;
int ans=bfs(s,s1);
cout<<ans<<endl;

    }
    
    return 0;
}