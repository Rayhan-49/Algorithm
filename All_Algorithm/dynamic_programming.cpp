#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int k;


 //fibnacci number using dp
 int dp[N];
 int fib(int n){
    //top down approach
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n]; 
    return dp[n]=fib(n-1)+fib(n-2);
 }

 //frog1 problem
 int h[N];
 int dp1[N];
 int func(int i){
    if(i==0) return 0;
    if(dp1[i]!=-1) return dp1[i];
    int cost=INT_MAX;

    //way 1
    cost=min(cost,func(i-1)+abs(h[i]-h[i-1]));
    //way 2
    if(i>1)
    cost=min(cost,func(i-2)+abs(h[i]-h[i-2]));
    return dp1[i]=cost;

 }

 //frog2 problem
 
 int h[N];
 int dp1[N];
 int func2(int i){
    if(i==0) return 0;
    if(dp1[i]!=-1) return dp1[i];
    int cost=INT_MAX;

   for (int j = 0; j < k; j++)
   {
        if(i-j>=0)
     cost=min(cost,func(i-k)+abs(h[i]-h[i-k]));
   }
    return dp1[i]=cost;

 }


 //longest increasing subsquence
 int dpp[N];
 int a[N];
int lis(int n){
    if(dpp[n]!=-1) return dpp[n];

int ans=1;
for (int i = 0; i < n; i++)
{
    if(a[n]>a[i]){
        ans=max(ans,lis(i)+1);
    }
}
return dpp[n]=ans;
}





int main(){
    memset(dp,-1,sizeof(dp));
    //dynamic programming is a recursing technique which is 
    //stored data dyanmically

   //frog 1;
   memset(dp1,-1,sizeof(dp1));
   int n; cin>>n;
   for (int i = 0; i < n; i++)
   {
    cin>>h[i];
   }
   cout<<func(n-1);

   //frog2
   cin>>k;
   cout<<func2(n-1);


//longest incresing subsequence
memset(dpp,-1,sizeof(dpp));
for (int  i = 0; i < n; i++)
{
    cin>>a[i];
}
int ans=0;
for (int i = 0; i < n; i++)
{
    ans=max(ans,lis(i)); 
}




   

    return 0;
}