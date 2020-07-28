#include<bitset/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};


// Function to find the LCA of two nodes with value l1 and l2. 
// if both l1 and l2 are smaller than root, then BST lies on the left side, 
// if both l1 and l2 are greater than root, then BST lies on the right side
// else if they lie on each side or equal to the root, root is the BST.
Node* LCA_BST(Node* root, int l1, int l2 )
{
   if(root == NULL) return NULL;
   if(l1 > root->val && l2 > root->val) return LCA_BST(root->right);
   else if(l1 < root->val && l2 < root->val) return LCA_BST(root->left);
   return root;
   
}

int main()
{
    Node* root;
    int LCA = LCA_BST(root, 3, 4);
    return 0;
}