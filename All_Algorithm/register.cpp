#include<bits/stdc++.h>
using namespace std;

class customer{
public:
int id;
string name;
string address;
int mob_no;

};
customer member[100];
int memno=0;
int age() {
    return 1;
}
void registr() {
    customer c;
    cout<<"enter your id"<<endl;
    cin>>c.id;
    cout<<"enter your name"<<endl;
    cin>>c.name;
    cout<<"enter data address"<<endl;
    cin>>c.address;
     cout<<"enter mobile no"<<endl;
    cin>>c.mob_no;
    cout<<"register succesfully"<<endl;

    member[memno]=c;
    memno++;

}

int main(){
    
   registr();
    return 0;
}