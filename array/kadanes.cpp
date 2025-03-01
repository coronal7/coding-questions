// Find the largest sum contiguous sub-array.

int findMax(int arr[], int n){
    int max_ending_here = 0;
    int max_so_far = INT_MIN;
    for(int i=0;i<n;i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if(max_ending_here < arr[i])
        max_ending_here = arr[i];
        if(max_so_far < max_ending_here)
        max_so_far = max_ending_here;
    }
    return max_so_far;
}