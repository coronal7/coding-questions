#include<bitset/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};


// Function to find the height of a tree. 
int height(Node* root)
{
    if(!root) return 0;
    return 1+ max(height(root->left),height(root->right));
}

// function to find whether the tree is balanced or not
bool isBalanced(Node* root)
{
   if(root == NULL) return true;
   int left_height = height(root->left);
   int right_height = height(root->right);
   if(abs(left_height-right_height)<2 && isBalanced(root->left) && isBalanced(root->right)) return true;
   return false;
}

int main()
{
    Node* root;
    bool check =  isBalanced(root);
    return 0;
}