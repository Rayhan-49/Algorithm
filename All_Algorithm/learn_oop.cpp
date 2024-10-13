#include<bits/stdc++.h>
using namespace std;


//user define data type
class hero{
    //properties
    private:
 string Name;
int health;
char level;
char pass;
public:

static int change;

// default constructor
hero(){
cout<<"constructor called"<<endl;
}

hero(int health,char level){//this is pointer which srored cuurent object address
   this->health=health;
   this->level=level;
}

//copy constructor
hero(hero& temp){
    this->health=temp.health;
    this->level=temp.level;
}

//behaviour
void print(){
    cout<<this->health<<endl;
    cout<<this->level<<endl;
}

//getter
int getHealth(){
    return health;
}

//getter for private member
char get_level(){

    return level;
}

//setter
void setlevel(char l){
level = l;
}

//setter
void sethealth(int h,char a){//string a is used for password to cahnge health
   if(a=='a'){
health = h;}
}


};

int hero::change=5;

int main(){
cout<<hero::change<<endl;//without declaring a object

hero a;
cout<<a.change<<endl;

 /*cout<<"hi"<<endl;   
hero h1(10,'a');
h1.print();
cout<<"hello"<<endl;

 hero r(h1);
r.print();*/

/*
hero a(10,'v');
hero b(20,'w');

a=b;

a.print();
*/

//hero* j1=new hero;//dynamically memory allocation 
//(*j1).health=70
//j1->health=70  access type




//h1.sethealth(70,'a');
//h1.sethealth(90,'b');
//cout<<"health is = "<<h1.getHealth()<<endl;
//cout<<sizeof(h1);//size of class hero



    return 0;
}