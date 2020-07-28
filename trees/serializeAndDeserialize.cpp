#include<bitset/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};

// function to create a new node
Node *newNode(int k)
{
    Node *root=new Node;
    root->data=k;
    root->left=root->right=NULL;
    return root;
}

// Preorder traversal function
void preorder(Node** root, vector<int>& A, int & i)
{
    if(i>=A.size() || A[i] = -1)
    {
        i++;
        return ;
    }
    *root = newNode(A[i]);
    i++;
    preorder(&(*root),A,i);
    preorder(&(*root), A,i);

}

// Function to deserialize a binary tree
Node* deserialize(vector<int> &A)
{
    Node* root = NULL;
    preorder(&root, A,0);
    return root;
}


// Function to serialize a binary tree.
// do a preorder traversal and store -1 for null nodes.
void serialize(Node* root, vector<int>& A)
{
   if(root)
   {
       A.push_back(root->val);
       serialize(root->left, A);
       serialize(root->right, A);
   } 
   else
   {
       A.push_back(-1);
   }
   
}

int main()
{
    Node* root;
    int height_tree = height(root);
    return 0;
}