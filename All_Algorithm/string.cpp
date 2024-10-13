#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    s="rayhanali";
    s.erase(3,2);//erase function work with index,,s.erase(index,how many want to erase)
    cout<<s<<endl;

    cout<<s.find("ali")<<endl;//s.find("part of a string") ,,to find string part

    s.insert(2,"jim");//s.insert(index,"string"),,it is used to insert a string in a particular position
    
    s.length();//s.length() or s.size() can be used
    
    string s1=s.substr(6,4);//s.substr(index,needed length)
    
    //string to number ,,number to string
    string k="237684";
    int x=stoi(k);

    cout<<to_string(x)<<endl;


    string d="dmutnsymrhgslocrhytr";
    sort(d.begin(),d.end());//to sort string

    return 0;
}
