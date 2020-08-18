// Problem statement is of two types.

// Given a sorted array of size n with numbers from 1 to n+1, find the missing number.
// 1 2 3 5 6 7  n=6  ans = 4

// Approach -- we can either do a linear search(condition will be num == index+1) 

// Type - 2 
// Given an unsorted array, find the missing number.

// In an unsorted array, we can calculate the sum of all the elements and subtract it form the sum of first n+1 natural numbers, we will get the missing number.

// Other approach can be to use XOR. XOR all the numbers and XOR the result with the XOR of first n+1 ntural numbers.
//(1^2^4) ^  (1^2^3^4) = 3 --- missing number.

// x ^ x = 0

// Time complexity of both sum and XOR is O(n).


// XOR method is better than sum method because in case of numbers being huge, integer overflow may occur.

int missingNumber(vector<int>& nums) {
        int xor1 = 1, xor2 = 0;
        int n = nums.size();
        vector<int>::iterator it;
        for(it=nums.begin();it!=nums.end();it++)
            xor2= xor2 ^ (*it);   
        for(int i=2;i<=n;i++)
            xor1 = xor1 ^ i;
        int ans = xor2 ^ xor1 ;
        return ans;
}