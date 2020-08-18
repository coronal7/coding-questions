// Given an array of only Os and 1s, find the length of the longest subarray with equal number of 0s and 1s.
// 0 0 1 0 0  for this answer will be 2.

// We'll find the sum of all elements starting from index 0 such that each index will have sum of left subarray. 0 will be counted as -1.
// We'll store this sum in a map with key being the sum value and value being the index.
// Key observation is whenever we encounter a sum value which is already present in the map, we can say that sum of elements starting from index 
// after the index given in map upto the current index is effectively 0. and thus we can find the length of this subarray acd check whether its the 
// longest.
// One more thing is if the sum is 0, it means that there are equal number of 0s and 1s starting from index 0 and ending at the current index.
// Time complexity of this approach is O(n).

int findMaxLength(vector<int>& nums) {
        
        unordered_map<int,int> mymap;
        int sum = 0;
        int longest_subarray = 0;
        
        for(int i=0;i<nums.size();++i)
        {
            sum += nums[i]==0?-1:1;
            
            if(sum==0)
            {
                if(longest_subarray < i+1)
                    longest_subarray = i+1;
            }
            else if(mymap.find(sum)!=mymap.end())
            {
                if(longest_subarray < i-mymap[sum])
                    longest_subarray = i-mymap[sum];
            }
            else
                mymap[sum] = i;
        }
        
        return longest_subarray;
    }
