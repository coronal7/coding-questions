#include<bitset/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};


// Function to convert a tree into its mirror image. 

Node* mirror(Node* root)
{
    if(root == NULL) return NULL;
    if(root->left) mirror(root->left);
    if(root->right) mirror(root->right);
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
    return root;
}

int main()
{
    Node* root;
    int diameter_tree = diameter(root);
    return 0;
}