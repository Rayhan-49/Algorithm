#include<bits/stdc++.h>
using namespace std;

int main(){
    
string s;cin>>s;
cout<<s.size();
cout<<s<<endl;
//sort string
 sort(s.begin(),s.end());
 cout<<s<<endl;

//reverse string
reverse(s.begin(),s.end());

//substring
string ans=s.substr(0,2);//s.substr(start,end);
cout<<ans<<endl;

//getline use for input space string
//getline(cin,s);

//toupper,,tolower
char d=toupper(s[0]);
d=tolower(s[0]);

//istringstream -->how many word in a string
istringstream iss(s);

string word;
while(iss>>word)cout<<word<<endl;


//erase()
s.erase(s.begin()+2);//s.begin(s.begin(),index)

//pop_back(),,push_back()
s.pop_back();
s.push_back('a');






    return 0;
}