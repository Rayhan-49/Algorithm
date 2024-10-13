#include<bits/stdc++.h>
using namespace std;
class B{
public:
int a;int b;
/*void operator+ (B &obj){
int value=this->a;
int value1=obj.a;
cout<<"output"<<value1-value;
}*/

void operator() (){
    cout<<"hello"<<endl;
}

};



int main(){
    B obj2,obj1;
    obj1.a=4;
    obj2.a=7;
   obj1();
    

    return 0;
}