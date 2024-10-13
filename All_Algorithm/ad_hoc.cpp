#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int a[n];

    //prefix sum
    int b[n];b[0]=a[0];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
  /* for (int i = 1; i < n; i++)
    {
        b[i]=b[i-1]+a[i];
    }
    int l,r,ans;
    cin>>l>>r;
    if(l!=0)
     ans=b[r]-b[l-1];
    else
    ans=b[r];

    cout<<ans<<endl;*/



    //difference array==add a value to range l to r
    int l,r,v;
    int q;cin>>q;
    while(q--){
    cin>>l>>r>>v;
    a[l]=a[l]+v;
    a[r]=a[r+1]-v;
    }
    
int c[n+1];c[0]=a[0];
for (int i = 1; i < n; i++)
{
    c[i]=c[i-1]+a[i];
}
int d[n];

for (int i = 0; i < n; i++)
{
    cout<<c[i]<<endl;
}


//2d prefix sum









    return 0;
}