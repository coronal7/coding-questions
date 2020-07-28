#include<bitset/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};

// Utility function to check whether a function is BST or not.
bool checkBSTUtil(Node* root, int min, int max)
{
    if(root == NULL) return true;
    if(root->val < min || root->val > max) return false;

    return checkBSTUtil(root->left, min, root->val-1) && checkBSTUtil(root->right, root->val+1,max);


// Function to check whether a function is BST or not.
bool checkBST(Node* root)
{
   if(root == NULL) return;
   bool ans = checkBSTUtil(root, INT_MIN, INT_MAX);
   return ans;
}

int main()
{
    Node* root;
    int height_tree = height(root);
    return 0;
}