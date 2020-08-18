// To find the kth largest or the kth smallest eleement in an array.
// If we sort the array, it will take O(nlogn) time.
// If we do it using max heap it will take O(n) time in heap creation and O(klogn) time in heapiy k times.
// Total time complexity will be O(n+klogn).

// Heap is implemented in cpp using priority queue.

using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--){
        int i,n,k;
        cin>>n;
        int a;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(i=0;i<n;i++){
            cin>>a;
            pq.push(a);
        }
        cin>>k;
        for(i=0;i<k-1;i++){
            pq.pop();
        }
        cout<<pq.top()<<endl;
    }
	return 0;
}
