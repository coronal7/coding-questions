// Find the equilibrium point in an array. It is the point so that sum of elements before it is equal to the sum of elements after it.
// 1 3 5 2 2 -- here 5 is the equilibrium point.

int equilibrium(int arr[], int n ){
    int totalSum = 0;
    for(int i=0;i<n;i++) sum+=arr[i];

    int leftsum = 0;
    for(int i=0;i<n;i++){
        totalSum = totalSum - arr[i];
        if(leftsum == totalSum ) return i;
        leftsum+=arr[i];
    }
    return -1;
}

// time complexity of this approach is O(n).