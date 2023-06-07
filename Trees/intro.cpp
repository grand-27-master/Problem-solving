#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* builtTree(int data)
{
    cout<<"enter tree data:"<<endl;

    cin>>data;

    if(data==-1)
    return NULL;

    cout<<"enter left side data:"<<endl;
    root->left=builtTree(root->left);

    cout<<"enter right side data:"<<endl;
    root->right=builtTree(root->right);

    return root;
}

// BFS approach
void levelorder(Node* root)
{
    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node* temp=q.front();  // root is same as q.front()
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left)
        q.push(temp->left);

        if(temp->right)
        q.push(temp->right);
    }
}

// follows LNR= left, node, right
void inorder(Node* root)
{
    // stack<Node*>s;

    // base case
    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

// follows NLR= node, left, right
void preorder(Node* root)
{
    if(root==NULL)
        return;

    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}


// follows LRN= left, right, node
void postorder(Node* root)
{
    if(root==NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}


int main() {
    
    Node* root=NULL;
    root=builtTree(root);

    levelorder(root);
    inorder(root);
    preorder(root);
    postorder(root);
}
