 // Search for an element in a rotated sorted array.
 // Key observtion is check middle element with the left index element, if mid element is greater than the left subarray is strictly sorted 
 // else the right subarray is strictly sorted. Check in the subarrays according to that.
 // This approach will take O(n) time.
 
 
 int n = nums.size();
        int left = 0;
        int right = n-1;
        int mid;
        
        //Iterative binary search
        while(left<=right)
        {
            mid = (left+right)/2;
            //cout<<nums[mid]<<"\n";
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>=nums[left])
            {
                if(target<=nums[mid] && target>=nums[left])
                    right = mid-1;
                else
                    left = mid+1;
            }
            else
            {
                if(target>=nums[mid] && target<=nums[right])
                    left = mid+1;
                else
                    right = mid-1;
            }
        }