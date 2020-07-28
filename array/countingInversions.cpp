// Given an unsorted array, inversion is defined as an occurence when for i<j, a[i] > a[j].

// Doing a brute-force method will take O(n*n) time.
// We can do this using merge-sort also.
// In merge process, let i is used for indexing left sub-array and j for right sub-array. At any step in merge(), if a[i] is greater than a[j],
// then there are (mid – i) inversions. because left and right subarrays are sorted, so all the remaining elements in left-subarray
// (a[i+1], a[i+2] … a[mid]) will be greater than a[j]

int mergeSort(int arr[], int n){
    int temp[n];
    return mergeSortUtil(arr, temp, 0, n-1);
}

int mergeSortUtil(int arr[], int temp[], int left, int right){
    int mid, inv_cnt = 0;
    if(right > left) {
        mid = (right + left)/2;

        inv_cnt+=mergeSortUtil(arr,temp,left,mid);
        inv_cnt+=mergeSortUtil(arr,temp,mid+1,right);

        inv_cnt+=merge(arr,temp,left,mid+1,right); 
    }
    return inv_cnt;
}

int merge(int arr[], int temp[], int left, int mid, int right){
    int i,j,k;
    int inv_count = 0;

    i = left; j=mid; k = left;
    while(i<mid && j<=right){
        if(arr[i]<arr[j])
        temp[k++] = arr[i++];
        else{
            temp[k++] = arr[j++];
            inv_count+=(mid-i);
        }
    }
    while(i<mid){
        temp[k++] = arr[i++];
    }
    while(j<=right)
    temp[k++] = arr[j++];

    for(int i=left;i<=right;i++)
    arr[i] = temp[i];

    return inv_count;
}