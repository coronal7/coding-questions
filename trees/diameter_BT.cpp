#include<bitset/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};

int height(Node* root)
{
    if(root == NULL) return 0;
    return 1 + max(height(root->left), height(root->right));
}

// Function to find the diameter of a tree. 
// The diameter of a tree is the number of nodes on the longest path between two leaves in the tree.
int diameter(Node* root)
{
   if(root == NULL) return 0;
   int left_height = height(root->left);
   int right_height = height(root->right);
   return max( left_height+right_height+1, max(diameter(root->left),diameter(root->right))); 
   
   
}

int main()
{
    Node* root;
    int diameter_tree = diameter(root);
    return 0;
}