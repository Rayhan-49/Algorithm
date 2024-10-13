#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;
    int n;cin>>n;
    int x;
    for(int i=0;i<n;i++){
cin>>x;
s.insert(x);

    }
    cout<<s.size()<<endl;
    return 0;
}