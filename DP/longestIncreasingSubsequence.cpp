// For given numbers [5, 8, 7, 1, 9] there are many increasing subsequence like 5, 5,8  5,8,9 etc. longest of these is of length 3.
// We need to find this length. Subsequence is not contiguous. 
// Solving it by brute force will take exponential time. each element can either be in the subsequence or not. therefore there will be a total 
// of (2^n) possible subsequences and brute force will visit all of them to find the longest one.

// for each index LIS ending at it is 
// L(i) = 1 + max( L(j) ) where 0 < j < i and arr[j] < arr[i]; or
// L(i) = 1, if no such j exists.

// Bigger problem can solved as a smaller sub-problem. It is therefore a DP question.

int lis( int arr[], int n ) 
{ 
	int lis[n]; 

	lis[0] = 1; 

	/* Compute optimized LIS values in bottom up manner */
	for (int i = 1; i < n; i++ ) 
	{ 
		lis[i] = 1; 
		for (int j = 0; j < i; j++ ) 
			if ( arr[i] > arr[j] && lis[i] < lis[j] + 1) 
				lis[i] = lis[j] + 1; 
	} 

	// Return maximum value in lis[] 
	return *max_element(lis, lis+n); 
} 

// Time complexity of this approach is O(n*n) and space-complexity is O(n).


