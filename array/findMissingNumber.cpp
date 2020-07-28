// Problem statement is of two types.

// Given a sorted array of size n with numbers from 1 to n+1, find the missing number.
// 1 2 3 5 6 7  n=6  ans = 4

// Approach -- we can either do a linear search(condition will be num == index+1) or a binary search. (time complx = logn)
// with binary search, we will check the condition. If num == index + 1, move to the left sub-array to find the missing num else move to the right sub-array.

// Type - 2 
// Given an unsorted array, find the missing number.

// In an unsorted array, we can calculate the sum of all the elements and subtract it form the sum of first n+1 natural numbers, we will get the missing number.

// Other approach can be to use XOR. XOR all the numbers and XOR the result with the XOR of first n+1 ntural numbers.
//(1^2^4) ^  (1^2^3^4) = 3 --- missing number.

// x ^ x = 0

// Time complexity of both sum and XOR is O(n). Best approach therefore is with the binary search in the sorted array.


// XOR method is better than sum method because in case of numbers being huge, integer overflow may occur.

