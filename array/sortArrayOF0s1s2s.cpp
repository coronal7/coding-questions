// To sort an array of 0s, 1s and 2s we can use counting method but that will not sort in place. Its just a method of printing the alements.
// To sort in place. we use Dutch NAtional Flag Algorithm where we have 3 pointers, Low, mid and high.
// Elements in the range of index 0 to low are 0s, from low to mid are 1s, from mid to high are unknown which we traverse and partition accordingly.
// and in the range high to n-1 are 2s.

//Code 

void sort012(int a[], int arr_size) 
{ 
    int lo = 0; 
    int hi = arr_size - 1; 
    int mid = 0; 
  
    // Iterate till all the elements 
    // are sorted 
    while (mid <= hi) { 
        switch (a[mid]) { 
  
        // If the element is 0 
        case 0: 
            swap(a[lo++], a[mid++]); 
            break; 
  
        // If the element is 1 . 
        case 1: 
            mid++; 
            break; 
  
        // If the element is 2 
        case 2: 
            swap(a[mid], a[hi--]); 
            break; 
        } 
    } 
} 