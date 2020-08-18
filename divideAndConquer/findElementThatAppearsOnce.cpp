// Given a sorted array with all elements except one element appearing twice. Find that element.
// 1 1 2 2 3 4 4 5 5  answer is 3
// If we do it using a linear search it will take O(n) time. We can do XOR of all the elements also. That will also take O(n).
// Since the array is sorted and it is given that the element will be present, we can do binary search.
// First check the boundary elements. After that, notice that each pair starts at even index and ends at odd index. Use this condition to
// partition the array and find the element.

// This approach will take O(logn) time.

int high = nums.size()-1;
int low = 0;
int mid;
        
//Boundary cases
if(high==0)
return nums[0];
else if(nums[0]!=nums[1])
return nums[0];
else if(nums[high]!=nums[high-1])
return nums[high];

    while(low<=high)
    {
        mid = low + (high-low)/2;
        //Unique element condition
        if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
        return nums[mid];
            
        if(((mid%2)==0 && nums[mid]==nums[mid+1])
            ||  ((mid%2)==1 && nums[mid]==nums[mid-1]))
            low = mid+1;
        else
            high = mid-1;
            
    }
    return -1;
    }

