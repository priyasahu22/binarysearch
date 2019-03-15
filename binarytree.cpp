//implement Binary Search Tree
//1. insert() 2. display() 3. search()
#include<iostream>
using namespace std;
//declaring a class node
class node
{
    public:
    int data;
    node*left;
    node*right;
  
   node(int d)
{
   left=NULL;
   right=NULL;
   data=d;
}
};
class bintry
{
   public:
   node*root;
   
   bintry()
{
    root=NULL;
}

//member function
void inserth(int value)
{
  insert(root,value);
}
void insert(node*temp,int value)
{
  node *curr=new node(value);
   if(root==NULL)
{
    root=curr;
}
else if(value<temp->data)
{
    if(temp->left==NULL)
{
   temp->left=curr;
}
else
{
   insert(temp->left,value);
}
}
else
{
  if(temp->right==NULL)
{
   temp->right=curr;
}
else
{
   insert(temp->right,value);
}
}
}
void displayh()
{
    display(root);
}
void display(node *curr)
{
  
  if(curr==NULL)
{
   return;
}

   display(curr->left);
   cout<<curr->data<<",";
   
   display(curr->right);
   //cout<<curr->data<<",";
 };
     
node* searchh(int val)
{
    return search(root,val);
 }
node* search(node *curr,int value)
{
    if(root==NULL||curr->data==value)
{
     return curr;
}
else if(value>curr->data)
{
   return search(curr->right,value);
}
else
{
   return search(curr->left,value);
}
}
};

int main(){
    bintry b1;
    b1.inserth(4);
    b1.inserth(2);
    b1.inserth(1);
    b1.inserth(3);
    b1.inserth(5);
    b1.displayh();
    if(b1.searchh(4) != NULL){
        cout<<endl<<b1.searchh(4)->data<<endl;
    }
} 
   
