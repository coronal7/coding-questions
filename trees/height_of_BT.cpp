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
   if(root == NULL) return 0;
   return 1 + max(height(root->left), height(root->right));
}

int main()
{
    Node* root;
    int height_tree = height(root);
    return 0;
}