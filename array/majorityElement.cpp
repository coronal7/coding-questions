// Find the element which appears more than N/2 times in an array.
// There might be a majority element or might not be. 
// If we take the brute force approach and take each number in one loop and find its frequency in the other loop, time complexity will be O(n*n).
// If we take hashing approach, time will be O(n) but extra space will be needed.
// We'll use Moore's Voting Algorithm

// First we'll find the candidate element and then we'll verify it.

// Logic is if there exits a majority element and we cancel out other element with it, in the end count of it will still be atleast 1 because 
// its frequency is > n/2.

int findCandidate(int a[], int size) 
{ 
	int maj_index = 0, count = 1; 
	for (int i = 1; i < size; i++) 
	{ 
		if (a[i] == a[maj_index]) 
			count++; 
		else
			count--; 
		if (count == 0) 
		{ 
			maj_index = i; 
			count = 1; 
		} 
	} 
	return a[maj_index]; 
} 

bool isMajority(int a[], int size, int cand) 
{ 
	int count = 0; 
	for (int i = 0; i < size; i++) 
	
	if (a[i] == cand) 
	count++; 
		
	if (count > size/2) 
	return 1; 
	
	else
	return 0; 
} 


// Time complexity of Moore's Voting Algorithm is O(n).

// Another approach is to use Bitmasking. Since each number is an integer, there will be 32 bits in each. If we traverse through all the bits
// and check if it is set for more than n/2 elements, then it will be set in the majority element also if it exists.
// Again we need to check whether the candidate element is majority element or not.

void findMajority(int arr[], int n) 
{ 
	// Number of bits in the integer 
	int len = sizeof(int) * 8; 

	// Variable to calculate majority element 
	int number = 0; 

	// Loop to iterate through all the bits of number 
	for (int i = 0; i < len; i++) { 
		int count = 0; 
		// Loop to iterate through all elements in array 
		// to count the total set bit 
		// at position i from right 
		for (int j = 0; j < n; j++) { 
			if (arr[j] & (1 << i)) 
				count++; 
		} 
		// If the total set bits exceeds n/2, 
		// this bit should be present in majority Element. 
		if (count > (n / 2)) 
			number += (1 << i); 
	} 

	int count = 0; 

	// iterate through array get 
	// the count of candidate majority element 
	for (int i = 0; i < n; i++) 
		if (arr[i] == number) 
			count++; 

	// Verify if the count exceeds n/2 
	if (count > (n / 2)) 
		cout << number; 
	else
		cout << "Majority Element Not Present"; 
} 