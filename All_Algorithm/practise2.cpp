#include<bits/stdc++.h>
using namespace std;





int main(){

    int n;cin>>n;

    double f;cin>>f;
    double a,b;
    
    vector<double>x(n),y(n);

   vector<vector<double>>v(n,vector<double>(n));



    for (int i = 0; i < n; i++)
    {
       cin>>x[i]>>y[i];
    
    }

       
        for (int i = 0; i < n-1; i=i+1)
        {
                v[i][0]=y[i];
        }
        
    for (int i = 1; i <n-1; i++)
    {
       for (int j = 0; j < n-i; j++)
       {
            v[i].push_back(v[i-1][j+1]-v[i-1][j]);
       }
       
    }
    
    double ans=y[0];
        double k=1;int fact=1;

         double p=(f-x[0])/(x[1]-x[0]);
    
    
        for (int j = 1; j < n; j++)
        {
            k=k*(p+1-j); fact=fact*j;


             ans=ans+ ((v[j-1][0]*k)/fact);
        }
        

        
    
  
cout<<ans<<endl;

    
    
        return 0;
}



/*6
38 
15 0.26
20 0.34
25 .42
30 0.5
35 0.57
40 0.64*/