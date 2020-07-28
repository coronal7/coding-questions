// Find a subarray with a given sum. Subarrays are contiguous. 
// SET 1 -- All numbers are postive.

// Approach 1 will be to find all subarrays and check if their sum is equal to the given sum value.
// Constructing all subarrays will take O(n*n) time.

// Better approach is to use sliding window technique.

int subarraySum(int arr[], int n, int sum)
{
    int start = 0;
    int curr_sum = arr[0];
    int found = 0;

    for(int i=1;i<=n;i++){
        while(curr_sum > sum && start < i-1){
        {
                curr_sum = curr_sum - arr[start];
                start ++;
        }
        if(curr_sum == sum){
            cout<<start<<" "<<i-1<<endl;
            found = 1;
            break;
        }
        if(i<n)
        curr_sum+=arr[i];    
    }

    if(found) return 1;
    else return 0;

}


// Time complexity with this method is O(n).

// SET - 2  Handling negative numbers

void subArraySum(int arr[], int n, int sum) 
{ 
    // create an empty map 
    unordered_map<int, int> map; 
  
    // Maintains sum of elements so far 
    int curr_sum = 0; 
  
    for (int i = 0; i < n; i++) 
    { 
        // add current element to curr_sum 
        curr_sum = curr_sum + arr[i]; 
  
        // if curr_sum is equal to target sum 
        // we found a subarray starting from index 0 
        // and ending at index i 
        if (curr_sum == sum) 
        { 
            cout << "Sum found between indexes "
                 << 0 << " to " << i << endl; 
            return; 
        } 
  
        // If curr_sum - sum already exists in map 
        // we have found a subarray with target sum 
        if (map.find(curr_sum - sum) != map.end()) 
        { 
            cout << "Sum found between indexes "
                 << map[curr_sum - sum] + 1 
                 << " to " << i << endl; 
            return; 
        } 
  
        map[curr_sum] = i; 
    } 
  
    // If we reach here, then no subarray exists 
    cout << "No subarray with given sum exists"; 
} 