#include<bitset/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};


// Function to find the LCA of a tree. 
Node* LCA(Node* root, int n1, int n2)
{
   if(root == NULL) return NULL ;
   if(root->val == n1 || root->val == n2) return root;
   Node* left_lca = LCA(root->left, n1,n2);
   Node* right_lca = LCA(root->right, n1,n2);
   if(left_lca && right_lca) return root;
   if(left_lca) return left_lca;
   if(right_lca) return right_lca;
   return NULL;
   
}

int main()
{
    Node* root;
    int height_tree = height(root);
    return 0;
}