#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
long long int n,p,s,l;
cin>>n>>p>>s>>l;
int x;
int cnt=0;
if(n%7==0)
x=n/7;
else
x=(n/7)+1;
int z=x%2;
long long int k=2*l;
long long int y=k;
long long int ans=k+s;
while((ans)<p && x>1){
if(ans>=p){
break;}
else{
    cnt++;
    ans=ans+y+s;
    x=x-2;
}
}
long long int e=l+s;
long long int temp=ans+(z*l)+s;
if(ans>p && cnt==0)
cout<<n-1<<endl;
else if(ans>p && cnt>0)
cout<<n-cnt<<endl;
else if(temp>=p){
    cout<<n-cnt+1<<endl;
}
else if(temp<p){
long long int q=p-temp;
long long int a=ceil(q/s);
cout<<n-ans+a+1<<endl;
}
else
{
    long long int r=p-e;
long long int b=ceil(r/s);
cout<<n-e+b+1<<endl;
}

    }

    return 0;
}