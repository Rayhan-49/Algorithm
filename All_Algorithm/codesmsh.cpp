#include<bits/stdc++.h>
using namespace std;
#define ll long long int

 int primefact(int n){
     int cnt=0;
for (int i = 2; i*i<=n; i++)
{
    if(n%i==0){
            cnt++;
        while(n%i==0){
            n=n/i;
        }

    }
}
if(n>1)
    return cnt+1;
else
return cnt;
 }

bool prime(int n){
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
for(int i=3;i*i<n;i=i+2){
if(n%i==0)return false;
}
return true;
}

int divisor(int n){
    set<int>s;
    for (int i = 1; i*i <= n; i++)
    {
        if(n%i==0){
            int x=i;
            int y=n/i;
            s.insert(x);
            s.insert(y);
        }
    }
return s.size();

}


int main(){

int t;cin>>t;
while(t--){
        int l,r,cnt=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++){

       if(prime(i)){continue;}
       else{

int prim=primefact(i);
    int div=divisor(i);

    if(prim%2==0 && div%2==0)
        cnt++;
    if(prim%2!=0 && div%2!=0)
        cnt++;
        else
            continue;
            }
            }



              cout<<cnt<<endl;


}


return 0;
}
