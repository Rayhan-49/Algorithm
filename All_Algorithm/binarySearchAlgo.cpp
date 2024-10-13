#include<bits/stdc++.h>
using namespace std;

void bs(int a[],int n,int x){
int l=0;
int r=n-1;
while(l<=r){
    int mid=(l+r)/2;
    if(a[mid]==x){
        cout<<"the index is "<<mid<<endl;
        return;}

    else if(a[mid]>x){
        r=mid-1;
    }
    else
    l=mid+1;
}
cout<<"not found"<<endl;
}


int firstoccurence(int a[],int n,int x){
int l=0;
int r=n-1;
int answer;
while(l<=r){
    int mid=(l+r)/2;
    if(a[mid]==x){
        answer=mid;
        r=mid-1;
       }

    else if(a[mid]>x){
        r=mid-1;
    }
    else
    l=mid+1;
}
return answer;
}


int lastoccurence(int a[],int n,int x){
int l=0;
int r=n-1;
int answer;
while(l<=r){
    int mid=(l+r)/2;
    if(a[mid]==x){
        answer=mid;
        l=mid+1;
       }

    else if(a[mid]>x){
        r=mid-1;
    }
    else
    l=mid+1;
}
return answer;
}


int main(){
    
    int n;cin>>n;
    int a[n+3];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    bs(a,n,x);

 

    //first and last occurrence of a value****
       int fo=firstoccurence(a,n,x);
    cout<<fo<<endl;
    int lo=lastoccurence(a,n,x);
    cout<<lo<<endl;


//count of an element in sorted array;
int cnt=(lo-fo)+1;

//number of time a sorted array rotated;




    



    return 0;
}