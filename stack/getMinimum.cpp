// Implement a special stack in which all standard operarions are there -- push/pop/ isEmpty etc and along with it support another function 
// getMin which will give the smallest element in the stack.

// One approach can be to use two stacks. one to do the normal operations and the other one to keep track of the min element.
// while pushing x in stack 1, check if x < top element of stack 2. if x<y, push x in both otherwise push x in stack1 and y in stack 2.
// while poppping pop from both. to find the minimum element, pop the frist element from stack2.
// This approach will take extra space.

// 8 10 3 7 
// getMin()  should return 3 in O(1) time.
// pop() pop()
// 8 10
// getMin() sould return 8 in O(1) time.

// To do this in O(1) space, we need to keep a variable min which will sotre the current minimum element in the stack and also store values in the
// stack by modifying them.

// Modified operations
// PUSH() 
// if empty stack or curr >= min, then push curr
// else push 2*curr - min and update min = curr // this will always be smaller than curr so that while popping we can identify it. 

// POP()
// if empty stack, then stack underflow. 
// else if (curr >= min) simply pop.
// else min = 2*min - curr and pop()

struct MyStack 
{ 
	stack<int> s; 
	int minEle; 

	// Prints minimum element of MyStack 
	void getMin() 
	{ 
		if (s.empty()) 
			cout << "Stack is empty\n"; 

		// variable minEle stores the minimum element 
		// in the stack. 
		else
			cout <<"Minimum Element in the stack is: "
				<< minEle << "\n"; 
	} 

	// Prints top element of MyStack 
	void peek() 
	{ 
		if (s.empty()) 
		{ 
			cout << "Stack is empty "; 
			return; 
		} 

		int t = s.top(); // Top element. 

		cout << "Top Most Element is: "; 

		// If t < minEle means minEle stores 
		// value of t. 
		(t < minEle)? cout << minEle: cout << t; 
	} 

	// Remove the top element from MyStack 
	void pop() 
	{ 
		if (s.empty()) 
		{ 
			cout << "Stack is empty\n"; 
			return; 
		} 

		cout << "Top Most Element Removed: "; 
		int t = s.top(); 
		s.pop(); 

		// Minimum will change as the minimum element 
		// of the stack is being removed. 
		if (t < minEle) 
		{ 
			cout << minEle << "\n"; 
			minEle = 2*minEle - t; 
		} 

		else
			cout << t << "\n"; 
	} 

	// Removes top element from MyStack 
	void push(int x) 
	{ 
		// Insert new number into the stack 
		if (s.empty()) 
		{ 
			minEle = x; 
			s.push(x); 
			cout << "Number Inserted: " << x << "\n"; 
			return; 
		} 

		// If new number is less than minEle 
		if (x < minEle) 
		{ 
			s.push(2*x - minEle); 
			minEle = x; 
		} 

		else
		s.push(x); 

		cout << "Number Inserted: " << x << "\n"; 
	} 
}; 

