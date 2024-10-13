#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;

int main() {int t;
cin>>t;
while(t--){
int n,k;long long int x;
cin>>n>>k>>x;
vector<long long int>v;
long long int sum,sumk,suml;
if(n%2==0)
sum=(((n/2)*(n+1)));
else
sum=(((n+1)/2)*n);
if(k%2==0)
sumk=(((k/2)*(k+1)));
else
sum=(((k+1)/2)*k);
 
 long long int g=n-k;
if(g%2==0)
suml=(((g/2)*(g+1)));
else
suml=(((g+1)/2)*g);

//cout<<sum<<" "<<sumk<<" "<<suml;
if(sumk>x)
cout<<"NO"<<endl;
else{
    if(n==k){
   if(sum>=x)
cout<<"YES"<<endl; 
else
cout<<"NO"<<endl;
}
    else{
if((sum-suml)>=x)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

    }

}
}
return 0;}

