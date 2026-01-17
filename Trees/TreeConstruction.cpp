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

void levelOrder(Tree* root)
{
    if(root == nullptr)
        return;
    queue<Tree*> q;
    q.push(root);
    while(!q.empty())
    {
        Tree* node = q.front();
        cout<<node->data<<" ";
        q.pop();
        if(node->left)
            q.push(node->left);
        if(node->right)
            q.push(node->right);
    }

}

Tree* insertKey(Tree* root, int key)
{
    if(root == nullptr)
    {
        Tree* newNode = new Tree(key);
        return newNode;
    }
    queue<Tree*> q;
    q.push(root);
    while(!q.empty())
    {
        Tree* temp = q.front();
        q.pop();
        if(!temp->left)
        {
            temp->left = new Tree(key);
            break;
        }
        else
            q.push(temp->left);
        if(!temp->right)
        {
            temp->right = new Tree(key);
            break;
        }
        else
            q.push(temp->right);
    }
    return root;
}

bool searchKey(Tree* root, int key)
{
    if(root == nullptr)
        return false;
    if(root->data == key)
    {
        return true;
    }
    bool leftsearch = searchKey(root->left, key);
    bool rightsearch = searchKey(root->right, key);
    return leftsearch || rightsearch;
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
    int key;
    // cout<<"Insert a Key : ";
    // cin>>key;
    // insertKey(root, key);
    cout<<"Inorder Traversal : ";
    inorder(root);
    cout<<endl<<"Preorder Traversal : ";
    preorder(root);
    cout<<endl<<"Postorder Traversal : ";
    postorder(root);
    cout<<endl<<"Levelorder Traversal : ";
    levelOrder(root);
    cout<<endl<<"Enter the value to be searched : ";
    cin>>key;
    if(searchKey(root, key))
        cout<<key<<" found.";
    else
        cout<<key<<" not found.";
    return 0;
}