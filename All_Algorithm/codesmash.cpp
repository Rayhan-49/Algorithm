#include<bits/stdc++.h>
using namespace std;
#define ll long long int

 bool prime(int n){
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
for(int i=3;i*i<=n;i=i+2){
if(n%i==0)return false;
}
return true;
}





int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
   int t;cin>>t;
   while(t--){
    int l,r,cnt=0;
    cin>>l>>r;

    for(int n=l;n<=r;n++){
            set<int>s,s1;
    for (int i =1; i*i <= n; i++)
    {
        if(n%i==0){
            int x=i;
            int y=n/i;
            s.insert(x);
            s.insert(y);
            if(prime(x))
                s1.insert(x);
             if(prime(y))
                s1.insert(y);

        }
    }

    int prim=s1.size();
    int div=s.size();

    if(prim%2==0 && div%2==0)
        cnt++;
    if(prim%2!=0 && div%2!=0)
        cnt++;
        else
            continue;

    }

    cout<<cnt<<endl;

   }


        return 0;
}
