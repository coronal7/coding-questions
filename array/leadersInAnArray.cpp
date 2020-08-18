// Find all elements which are greater than all elements to the right side of it.
// For array [15, 18, 5, 6, 2] leaders are 18, 6 and 2.

// Taking a brute force approach of picking one element and then checking if all elements are smaller than it on the right side will take O(n*n) time.
// We'll traverse the array from right side and keep track of the max_element found so far. 

stack<ll> s;
for(ll i =0;i<n;i++)
cin>>arr[i];
ll max_ele = arr[n-1];
s.push(max_ele);
for(ll i=n-2;i>=0;i--){
	if(arr[i]>=max_ele){
	    s.push(arr[i]);
	    max_ele = arr[i];
	}
}
while(!s.empty()){
	cout<<s.top()<<" ";
	s.pop();
}
 
