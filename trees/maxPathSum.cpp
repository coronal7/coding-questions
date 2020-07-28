#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
};

// Utility function to find result and return the max path sum throuh that node.
int maxPathSumUtil(Node* root, int & result)
{
    if(!root) return 0;
    int left = maxPathSumUtil(root->left, result);
    int right = maxPathSumUtil(root->right, result);

    // MaxPathSum through current node. It can contain atmost one child node.
    int straightPathSum  = max(max(left,right)+root->val, root->val);

    int max_path = max(straightPathSum, left+right+root->val);

    // Update result
    result = max(result, max_path);

    // Return straight path through current node.
    return straightPathSum;
}



// Function to find the max path sum i.e. sum of each node value on path between 2 nodes in a tree.
// Nodes may have negative value
// result stores the value of maxPathSum in a tree.
int maxPathSum(Node* root)
{
   if(root == NULL) return 0;
   int result = 0;
   maxPathSumUtil(root, result);
   return result;   
}

int main()
{
    Node* root;
    int pathSum_tree = maxPathSum(root);
    return 0;
}