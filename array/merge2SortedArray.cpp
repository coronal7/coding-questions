// Given 2 sorted arrays of same/different lengths, merge them to form a single sorted array.
// a1 [1,3,5,7]   a2[2,4,6,8]    res[1,2,3,4,5,6,7,8]
// Naive approach is to copy both to a single array and then sort it. It will take nlogn time. where n = (n1 + n2)  sum of lengths of both the arrays.

// If we do by using insertion sort, and insert every element of a2 at its correct postion in a1, time complexity will be n1*n2.

// Best approach is to do merge function of the merge sort.

void merge(int arr1[], int arr2[], int n1, int n2){
    int arr3[n1+n2];
    int i,j,k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
        
    }
    while(i<n1){
        arr3[k++] = arr1[i++];
    }

    while(j<n2){
        arr3[k++] = arr2[j++];
    }
}

// time complexity of this method will be O(n1+n2).

