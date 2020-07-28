// Given an array of size n with numbers from 0 to n-1 and each number occuring any number of times, find the duplicate elements.
// 1 2 5 3 4 3

// Approach - 1 .  We can store all the numbers in a separate array. If number is already present in the auxillary arrar, we can simply return it
// otherwise we can keep inserting. Time complx -- O(n) and space complx -- O(n)

// Approach - 2 .  We can use changing signs of the array element approach if all array elements are smaller than the size of the array and
// are greater than or equal to 0 initially.


void printRepeating(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[abs(arr[i])]>0)
        arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
        cout<<"Repeating element found "<<abs(arr[i])<<" ";
    }
}

// There is one problem with the above approach. For arrays where elements are coming more than twice, it will print them again and again.
// For example: {1, 6, 3, 1, 3, 6, 6} it will give output as : 1 3 6 6.

// To counter this, we can use another approach. Here, we will add the size of the array to the index value and then loop over the array again to
// find the repeating elements.

for (int i = 0; i < arr_size; i++) 
{ 
    arr[arr[i] % arr_size] = arr[arr[i] % arr_size] + arr_size; 
} 
cout << "The repeating elements are : " << endl; 
for (int i = 0; i < arr_size; i++)  
{ 
    if(arr[i] >= arr_size*2)  
    { 
        cout << i << " " << endl; 
    } 
} 