#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for (int i = 10; i >=0; i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}


int main(){
    
    //all odd number last bit is always 1 and even is 0

    //xor is if all two is same then 0 otherwise 1,,like 0 0 and 1 1 is 0;

    //right shift is remove a digit from right,,,,3>>1 ==1
     //left shift is add a 0 in right,,,,3<<1 ==110

  //maximum value we can store is 2^n -1;;n==bit size

int important;
  //1<<n==2^n ******
  //to avoid error 1ll<<n 


//check if i-th bit is set or not
printBinary(8);
int a=9; int i=3;
    if((a&(1<<i))!=0)
    cout<<"set bit"<<endl;
    else 
    cout<<"not set bit"<<endl;


//to set a bit which is unset
printBinary(a|(i<<i));

//to unset a bit which is set
printBinary(a&(~(1<<i)));

//toggle==1->0 and 0->1
printBinary(a^(1<<2));
printBinary(a^(1<<3));

//count set bit
cout<<__builtin_popcountll(a);

//even odd
if(i&1)
cout<<"odd"<<endl;
else
cout<<"even"<<endl;


//divide by 2 or multiply by 2
int k=5;
cout<<(k>>1)<<endl;//divide by 2=2
cout<<(k<<1)<<endl;//multiply by 2=10


//convert uppercase letter into lowercase and vice versa
char A='A';
char a=A|(1<<5);//5th bit need to be set
cout<<a<<endl;//output a;
cout<<(a&(~(1<<5)))<<endl;//output =A//5th bit need to unset

//again convert
cout<<char('C' | ' ')<<endl;//uppercase to lowercase ==c
cout<<char('c' & '_')<<endl;//lower case to uppercase==C

//ith bit to lsb bit unset
int j=4;int s=59;
int d= s &(~(1<<(j+1)-1)) ;
printBinary(d);

//ith bit to msb bit unset
int f=s &((1<<(j+1)-1)) ;
printBinary(f);


//does a value is power of two (2^x)
int v=15;
if(v&(v-1))
cout<<"not power 2"<<endl;
else
cout<<"power of two"<<endl;


//swap two number by xor
int a1=4;
int b1=6;//x^x=0 ,,,x^0=x  *****

a1=a1^b1;
b1=b1^a1;//b-->a
//b=b^(a^b)=b^b^a==0^a=a
a1=a1^b1;
//a=(a^b)^a==a^a^b=0^b==b





















    return 0;
}