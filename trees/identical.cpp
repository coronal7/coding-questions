#include<bitset/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};


// Function to check if two trees are isentical. 
bool isIdentical(Node* root1, Node* root2)
{
   if(root1 == NULL && root2 == NULL) return true;
   if(root1 == NULL || root2 == NULL) return false;
   if(root1->val == root2->val && isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right) )
   return true;
   return false;
}

int main()
{
    Node* root1, root2;
    bool ans  = isIdentical(root1,root2);
    return 0;
}