#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;
};

Node* create(int n){
Node* head=NULL;
Node* temp=NULL;
for (int i = 0; i < n; i++)
{
    Node* newnode=new Node();
    newnode ->data=i+1;
    newnode ->next=NULL;

    if(head== NULL){
head=newnode;
temp=head;
    }
    else{
        temp->next=newnode;
        temp=temp->next;

    }
}
return head;
}

void print(Node* head){
Node* temp=head;
while (temp!=NULL)
{
   cout<<temp->data<<" ";
   temp=temp->next;

}
cout<<endl;


}

int main(){
int n;
cout<<"enter no of nodes";
cin>>n;
Node* head=create(n);
print(head);


 
    return 0;
}