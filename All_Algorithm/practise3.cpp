#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int n;
        cin>>n;
        if(n==0){
            break;
        }
        else{
            int cnt=0;

            for(int i=0;i<n;i++){
                string c;
                cin>>c;
                
                if(c[0]=='D'){
                    string h1,m1,s1,h2,m2,s2;
                    int work;
                    bool cnt1=false,cnt2=false;
                    if(c[3]==':'){
                    h1=c[2];
                    
                    m1=c[4]+c[5];
                    s1=c[7]+c[8];

                    h2=c[10]+c[11];
                    m2=c[13]+c[14];
                    s2=c[16]+c[17];
                    
                    
                    }
                    else{
                    h1=c[2]+c[3];
                    
                     m1=c[5]+c[6];
                    s1=c[8]+c[9];

                    h2=c[11]+c[12];
                    m2=c[14]+c[15];
                    s2=c[17]+c[18];
                    
                    
                    }

                    int hour1=stoi(h1);
                    int mi1=stoi(m1);
                     int sec1=stoi(s1);

                     int hour2=stoi(h2);
                    int mi2=stoi(m2);
                     int sec2=stoi(s2);

                    int total_sec1=(hour1*3600)+(mi1*60)+(sec1);
                     int total_sec2=(hour2*3600)+(mi2*60)+(sec2);

                     if(total_sec1>34200)
                     cnt1=true;
                     else if(total_sec1>30600){
                        work=total_sec2-total_sec1;

                     }
                     else
                     work=total_sec2-34200;

                     if(work<28800)
                     cnt2=true;

                     if(cnt1==true || cnt2==true)
                     cnt++;

                }

                else if(c[0]=='E'){
                    string h1,m1,s1,h2,m2,s2;
                    int work;
                    bool cnt1=false,cnt2=false;
                    if(c[3]==':'){
                    h1=c[2];
                    
                    m1=c[4]+c[5];
                    s1=c[7]+c[8];

                    h2=c[10]+c[11];
                    m2=c[13]+c[14];
                    s2=c[16]+c[17];
                    
                    
                    }
                    else{
                    h1=c[2]+c[3];
                    
                     m1=c[5]+c[6];
                    s1=c[8]+c[9];

                    h2=c[11]+c[12];
                    m2=c[14]+c[15];
                    s2=c[17]+c[18];
                    
                    
                    }

                    int hour1=stoi(h1);
                    int mi1=stoi(m1);
                     int sec1=stoi(s1);

                     int hour2=stoi(h2);
                    int mi2=stoi(m2);
                     int sec2=stoi(s2);

                    int total_sec1=(hour1*3600)+(mi1*60)+(sec1);
                     int total_sec2=(hour2*3600)+(mi2*60)+(sec2);

                     if(total_sec1>45000)
                     cnt1=true;
                     else if(total_sec1>30600){
                        work=total_sec2-total_sec1;

                     }
                     else
                     work=total_sec2-34200;

                     if(work<32400)
                     cnt2=true;

                     if(cnt1==true || cnt2==true)
                     cnt++;

                }



            //end
            }

            if(cnt==0)
            cout<<"All OK"<<endl;
            else if(cnt==1)
            cout<<"1 Point(s) Deducted"<<endl;
            else if(cnt==2)
            cout<<"2 Point(s) Deducted"<<endl;
             else if(cnt==3)
            cout<<"3 Point(s) Deducted"<<endl;
            else
            cout<<"Issue Show Cause Letter"<<endl;
           


        }
    }
}