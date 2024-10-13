#include<bits/stdc++.h>
using namespace std;

class human{
public:
int height;
int weight;
int age;
public:
int getage(){
return this->age;
}

int setweight(int w){
this->weight=w;
}
};

class male: public human{

public:
string color;

void sleep(){

    cout<<"male sleeping"<<endl;
}
};


int main(){
    
male obj;
cout<<obj.age<<endl;
cout<<obj.weight<<endl;
cout<<obj.height<<endl;
cout<<obj.color<<endl;

obj.setweight(67);
cout<<obj.weight<<endl;
obj.sleep();

    return 0;
}