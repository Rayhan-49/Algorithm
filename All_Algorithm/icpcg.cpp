#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
cin>>t;
while(t--){
string s;
cin>>s;
int sum=0,cnt=0;
int over=(s.length())/6;
int ball=(s.length())%6;
int len=s.length();
for (int i = 0; i < len; i++)
{
    if(s[i]!='W')
    sum=sum+(s[i]-48);
    else if(s[i]=='W')
    cnt++;

}
cout<<over<<"."<<ball<<" ";
if(over>=1 && ball>0)
cout<<"Overs ";
else if(over>1)
cout<<"Overs ";
else
cout<<"Over ";
if(sum>1)
cout<<sum<<" Runs ";
else
cout<<sum<<" Run ";

if(cnt>1)
cout<<cnt<<" Wickets.";
else
cout<<cnt<<" Wicket.";
cout<<endl;


}
    return 0;
}