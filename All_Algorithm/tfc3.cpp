#include<iostream>
#include<vector>
using namespace std;
//2103049
int main() {
int n;
cin>>n;
vector<int>v;
vector<int>v1;
for (int i = 1; i <= 9; i++)
{
    if(n%i==0)
    v.push_back(i);
}
for (int i = 0; i < v.size(); i++)
{
   for (int j = i; j <v.size() ; j++)
   {
    v1.push_back(v[i]*v[j]);
   }}
   bool k=false;
   for (int i = 0; i <v1.size(); i++)
   {
    if(v1[i]==n){
 k=true;break;
   }}
   if(k)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;


return 0;
}

