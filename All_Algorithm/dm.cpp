#include<bits/stdc++.h>
using namespace std;

int main(){
     
    int low,high,sum;   
    cin>>low>>high;
    if(low>high){
        cout<<"invalid"<<endl;
    }

    else{

        if(__builtin_popcount(low)!=1 || __builtin_popcount(high)!=1)
            cout<<"error"<<endl;
                else{
                    for (int i = low; i < high; i++)
                        {
                        sum=sum+ __builtin_popcount(i);
                        }
                        cout<<sum<<endl;
            }
    }


    return 0;
}