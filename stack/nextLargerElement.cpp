// For given array, find the next larger element on the right side for each element of the array.
// 18 7 6 12 15 ans array will be [-1, 12, 12, 15, -1]
// Brute force approach of picking an element and then finding the next greater element on its right side will take O(n*n) time.

// therefore, we'll use stack.

// Logic will be push the element onto the stack if its value is less or equal to the element present at index given by top of the stack.
// arr [13, 7, 6, 12, 10]
// push indexes on the stack. stk[0]
// 7<13, push 1 stk[0,1]
// 6<13, push 2 stk[0,1,2]
// 12 > 6, we have found the next greater for 6, pop and store in the ans array. push 3 on the stack.
// 12 > 7, next greater for 7 found, pop and store in the ans array. 


s.push(arr[0]); 

for (int i = 1; i < n; i++) { 

	if (s.empty()) { 
	s.push(arr[i]); 
	continue; 
	} 

	/* if stack is not empty, then 
	pop an element from stack. 
	If the popped element is smaller 
	than next, then 
	a) print the pair 
	b) keep popping while elements are 
	smaller and stack is not empty */
	while (s.empty() == false && s.top() < arr[i]) 
	{		 
		cout << s.top() << " --> " << arr[i] << endl; 
		s.pop(); 
	} 

	/* push next to stack so that we can find 
	next greater for it */
	s.push(arr[i]); 
} 

/* After iterating over the loop, the remaining 
elements in stack do not have the next greater 
element, so print -1 for them */
while (s.empty() == false) { 
	cout << s.top() << " --> " << -1 << endl; 
	s.pop(); 
} 

// Time complexity of this approach is O(n).
