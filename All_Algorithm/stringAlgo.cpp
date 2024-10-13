#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int len=s.size();
    int n=0;


    //convert string into number
    for (int i = 0; i < len; i++)
    {
        int d=s[i]-'0';
        n=(n*10)+d;
    }
    cout<<n+1<<endl;
    //do by inbuilt function
    int k=stoi(s);
    cout<<k+2<<endl;



    //number into stirng 
    int v;cin>>v;
   string g=to_string(v);


   //next permutation algorithm ****
   while(next_permutation(s.begin(),s.end())){
    cout<<s<<endl;
   }


   //next permutation in vector
   vector<int>m={1,2,3};
   while(next_permutation(m.begin(),m.end())){

    for (int i = 0; i < 3; i++)
    {
       cout<<m[i]<<" ";
    }
    cout<<endl;


    //string hashing===convert a stirng into a unique number
   int prime=3;
   int power=1;int ans=0;
   for (int i = 0; i < len; i++)
   {
    ans=ans+(s[i]*power);
    power=power*prime;
   }
   cout<<ans<<endl;


   //substring hashing ==convert a substring into a unique number
   

     

   }

    


    return 0;
}