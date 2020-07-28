// Find the minimum number of platforms needed on a station so that no train waits having overlapping time intervals.
// Arrival time and departure time of the trains is given.

// Approach is to sort the arrival array and the departure array and consider each arrival as an increment in plat_needed and each departure as
// a decrement in plat_needed. answer will be max platform needed at any interval of time.

int maxPlatforms(int arr[], int dep[], int n){
    sort(arr, arr+n);
    sort(dep, dep+n);
    int i = 1, j= 0;
    int need_plat = 1, max_plat = 1;
    while(i<n && j<n){
         if(arr[i]<=dep[j]){
            need_plat++;
            i++; 
         }
         else {
             need_plat--;
             j++;
         }
         if(max_plat < need_plat)
         max_plat = need_plat;
    }

    return max_plat;
}


// time complexity - O(nlogn)  ---- nlogn in sorting.

// we can also do it in O(n) time using extra space for multimap.

int findPlatform(int arr[], int dep[], int n) 
{ 
    multimap<int, char> order; 
    for (int i = 0; i < n; i++) { 
  
        // If its arrival then second value 
        // of pair is 'a' else 'd' 
        order.insert(make_pair(arr[i], 'a')); 
        order.insert(make_pair(dep[i], 'd')); 
    } 
  
    int result = 0; 
    int plat_needed = 0; 
  
    multimap<int, char>::iterator it = order.begin(); 
  
    for (; it != order.end(); it++) { 
  
        if ((*it).second == 'a') 
            plat_needed++; 
        else
            plat_needed--; 
  
        if (plat_needed > result) 
            result = plat_needed; 
    } 
    return result; 
} 
  