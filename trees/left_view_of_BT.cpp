#include<bitset/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};

// Utility function to find the left view of a binary tree
void left_view_util(Node* root,int level, int * max_level)
{
    if(root == NULL) return ;
    if(max_level < level)
    {
        cout<<root->val;
        max_level = level;
    }
    left_view_util(root->left, level+1, max_level);
    left_view_uti(root->right, level+1, max_level);
}


// Function to find the left view of a binary tree. 
void left_view(Node* root)
{
   if(root == NULL) return;
   int max_level = 0;
   left_view_util(root, 1, &max_level);
   
}

int main()
{
    Node* root;
    left_view(root);
    return 0;
}