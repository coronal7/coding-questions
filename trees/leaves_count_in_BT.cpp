#include<bitset/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};


// Function to count the leaves in a tree. 
int leaf_count(Node* root)
{
   if(root == NULL) return 0;
   if(root->left == NULL && root->right == NULL) return 1;
   return leaf_count(root->left) +  leaf_count(root->right));
}

int main()
{
    Node* root;
    int leaves = leaf_count(root);
    return 0;
}