#include<bits/stdc++.h>
using namespace std;


struct Node{
        int data;
        Node* left;
        Node* right;
    };

    Node* create(Node* root){
        
    Node* newnode=new Node();
    int x;
    cout<<"enter data for root";
    cin>>x;
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    root=newnode;

        if(x==-1)
        return NULL;
         
         cout<<"enter int left ";
         root->left=create(root->left);
        cout<<"enter right";
        root->right=create(root->right);
        return root;
        
    }


int main(){
    Node* root=NULL;
    root=create(root);


    return 0;
}