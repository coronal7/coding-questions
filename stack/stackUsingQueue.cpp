// Costly PUSH operation
class Stack{
  queue<int> q1,q2;
  int curr_size;
  
  public: 
  Stack(){
      curr_size = 0;
  }
  void push(int n){
      curr_size ++;
      while(!q1.empty()){
          int temp = q1.front();
          q2.push(temp);
          q1.pop();
      }
      q1.push(n);
      while(!q2.empty())
      {
          int temp = q2.front();
          q1.push(temp);
          q2.pop();
      }
  }

  int pop(){
      if(isEmpty()) return -1;
      int res = q1.front();
      curr_size -- ;
      q1.pop();
      return res;

  }

  bool isEmpty()
  {
      if(q1.empty()) return true;
      else return false;
  }

  int size()
  {
      return curr_size;
  }

};

