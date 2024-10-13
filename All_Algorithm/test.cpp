#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;cin>>n;
    int a[n];
    cout<<"enter"<<endl;
   int k;cin>>k;
    bool m=false;
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
int cnt1=0;
    for (int i = 0; i < n; i++)
	{
		cnt1++;
		if(a[i]==k)
	break;
	}
	

    int hi=n-1,lo=0;int mid;
int cnt=0;
    while(hi>lo){
		cnt++;
        mid=(hi/2)+(lo/2);
        if(mid==k){
        break;
        }
            else if(k>mid)
            lo=mid+1;
            else
            hi=mid-1;

    }


cout<<"comparisons of linear search "<<cnt1<<endl;
cout<<"comparisons of binary search "<<cnt<<endl;
    return 0;
}
