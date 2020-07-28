// kth smallest element in a BST

// Approach - 1 is to do a inorder traversal of the tree and store it in an array. (k-1)th index element from the array will be the answer.

// second approach is to keep a track of the elements checked so far and then finding the kth smallest.

int kthSmallestUtil(Node* root, int &k)
{
    if(!root) return 0;

    int left = kthSmallestUtil(root->left, k);
    if(left) return left;

    k--;
    if(k==0) return root->data;

    int right = kthSmallestUtil(root->right, k);
    return right;
}

int kthSmallest(Node* root, int k){
    int ans = kthSmallestUtil(root, k);
    return ans;
}


// Time complexity of this method is O(n) because in case of skewed trees we need to travel each node and space complexity is O(h). 
