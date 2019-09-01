#include<iostream>
#include<queue>

using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

node* buildTree()
{
    int d;
    cin>>d;
    node *root=new node(d);
    string l;
    cin>>l;
    if(l=="true"){
    root->left=buildTree();
    }
    else{
        root->left=NULL;
    }
    string r;
    cin>>r;
    if(r=="true"){
    root->right=buildTree();
    }
    else
    {
        root->right=NULL;
    }
    return root;

   
}
void zigzag(node *root)
{   static int temp=0;
    queue<node*> q;
    //base case
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *f=q.front();
        if(f==NULL){
            ++temp;
            
            q.pop();
            if(!q.empty())
                q.push(NULL);
        }
        else if(temp&1)
        {
            cout<<f->data<<" ";
            q.pop();
            if(f->right)
                q.push(f->right);
            if(f->left)
                q.push(f->left);
                
        }
        else{
            cout<<f->data<<" ";
            q.pop();
             
            if(f->left)
                q.push(f->left);
            if(f->right)
                q.push(f->right);       
        }
        
    }
}
int main() {
    node *root1=buildTree();
     zigzag(root1);
    
     return 0;       
}