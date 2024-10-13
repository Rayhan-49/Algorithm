#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
for(int i=3;i*i<n;i=i+2){
if(n%i==0)return false;
}
return true;
}


void sieve(int n){

int prime[n+3];
memset(prime,0,sizeof(prime));
for(int i=2;i*i<=n;i++){
if(prime[i]==0){
    for(int j=i*i;j<=n;j=j+i){
        prime[j]=1;
    }
}
}
for (int i = 2; i <= n; i++)
{
    if(prime[i]==0)cout<<i<<" ";
}
}


 void primefact(int n){
for (int i = 2; i*i<=n; i++)
{
    if(n%i==0){
        int cnt=0;
        while(n%i==0){
            cnt++;
            n=n/i;
        }
        cout<<i<<"^"<<cnt<<",";
    }
}
if(n>1)cout<<n<<"^"<<1<<endl;
else
cout<<endl;
 }

//binary exponentiation(x^y) with log(n)complexity
  long long power(long long base,long long n){
long long result=1;
while(n){
    if(n%2==1){
        result=result*base;//if number result is big then mod the result
        n--;
    }
    else{
        base=base*base;//if number result is big then mod the result
        n=n/2;
    }
}
return result;
  }


//matrix exponentiation (matrix^n) is same as bianry exponentiation
//just use matrix

//divisor
set<int>s;
int divisor(int n){
    for (int i = 1; i*i <= n; i++)
    {
        if(n%i==0){
            int x=i;
            int y=n/i;
            s.insert(x);
            s.insert(y);
        }
    }

}

//euclude algorithm for gcd
int gcd(int a,int b){
        if(b==0)return a;
        return gcd(b,a%b);

}





int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

   /* bool x=prime(3);
    if(x)cout<<"yes";
    else
    cout<<"no";*/
   // sieve(30);
//primefact(30);
//cout<<power(2,9);
//cout<<"total divisor"<<s.size()<<endl;
//v.assign(s.begin(),s.end());  to copy all the value of set into vector
cout<<gcd(6,12)<<endl;
    return 0;
}
