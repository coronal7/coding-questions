// Given a string, find all possible permuatations of the string.
// For example permutations of ABC are ABC, ACB, BAC, BCA, CAB, CBA. 
// For a string of length n, there will be n! permutations.
//              ABC
//           /   |    \   
//          /    |     \  
//       ABC    BAC     CBA         -------lvl 1
//      /\       /\       /\ 
//     /  \     /  \     /  \ 
//  ABC  ACB  BAC  BCA  CBA  CAB

// We can follow this method to find all the permutations. height of the tree will be equal to the number of characters in the string. 
// At level 1, we keep the first letter fixed, at level 2, we keep 2 letters fixed and so on.

/* Function to swap values at two pointers */
void swap(char *x, char *y) 
{ 
	char temp; 
	temp = *x; 
	*x = *y; 
	*y = temp; 
} 

/* Function to print permutations of string 
This function takes three parameters: 
1. String 
2. Starting index of the string 
3. Ending index of the string. */
void permute(char *a, int l, int r) 
{ 
	int i; 
	if (l == r) 
		cout<<a<<endl; 
	else
	{ 
		for (i = l; i <= r; i++) 
		{ 
			swap((a+l), (a+i)); 
			permute(a, l+1, r); 
			swap((a+l), (a+i)); //backtrack 
		} 
	} 
} 

/* Driver program to test above functions */
int main() 
{ 
	char str[] = "ABC"; 
	int n = strlen(str); 
	permute(str, 0, n-1); 
	return 0; 
} 

// Time-complexity of this function will be o(n!*n)

