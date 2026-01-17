#include<bits/stdc++.h>
using namespace std;
class Tree{
public:
    int data;
    Tree* left;
    Tree* right;
    
public:
    Tree(int data1, Tree* left1 = nullptr, Tree* right1 = nullptr)
    {
        data = data1;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(Tree* root)
{
    if(root == nullptr)
        return;

    inorder(root->left);
    cout<< root->data<<" ";
    inorder(root->right);
}

void preorder(Tree* root)
{
    if(root == nullptr)
        return;
    cout<< root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Tree* root)
{
    if(root == nullptr)
        return;

    postorder(root->left);
    postorder(root->right);
    cout<< root->data<<" ";
}

int main()
{
    Tree* root = new Tree(1);
    root->left = new Tree(3);
    root->right = new Tree(5);
    root->left->left = new Tree(6);
    root->left->right = new Tree(8);
    root->right->left = new Tree(2);
    root->right->right = new Tree(4);
    cout<<"Inorder Traversal : ";
    inorder(root);
    cout<<endl<<"Preorder Traversal : ";
    preorder(root);
    cout<<endl<<"Postorder Traversal : ";
    postorder(root);
    return 0;
}