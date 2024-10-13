#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;
};

Node* create(Node* head){
Node* newnode=new Node();
cout<<"enter data";
int c;
 cin>>c;
 newnode->data=c;
 newnode->next=NULL;

 head=newnode;

 if(c==-1)
 return NULL;
head->next=create(head->next);

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
//cout<<"enter no of nodes";
//cin>>n;
Node* head=NULL;
head=create(head);
print(head);


 
    return 0;
}