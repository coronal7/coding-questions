class Queue{
    stack<int> s1,s2;
    int curr_size;

    public:
    Queue()
    {
        curr_size = 0;
    }

    void push(int n)
    {
        curr_size++;
        while(!s1.empty){
            int temp = s1.top();
            s2.push(temp);
            s1.pop();
        }
        s1.push(n);
        while(!s2.empty){
            int temp = s2.top();
            s1.push(temp);
            s2.pop();
        }
    }

    int pop()
    {
        if(isEmpty()) return -1;
        else 
        {
            curr_size -- ;
            int res = s1.top();
            s1.pop();
            return  res;
        }
    }

    int size()
    {
        return curr_size;
    }

    bool isEmpty()
    {
        if(curr_size == 0) return true;
        else return false;
    }
};