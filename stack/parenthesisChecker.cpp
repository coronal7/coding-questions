// Check if the parenthesis in a string are balanced or not.

bool checkParenthesis(string s){
    stack<char> stk;
    bool flag = true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{') stk.push(s[i]);
        else if(s[i]==')'){
            if(stk.empty() || stk.top()!= '('){flag = false; break;} 
            else stk.pop();
        }
        else if(s[i]==']'){
            if(stk.empty() || stk.top()!= '[') {flag = false; break;}
            else stk.pop();
        }
        else if(s[i]=='}'){
            if(stk.empty() || stk.top()!= '{') {flag = false; break;}
            else stk.pop();
        }
    }
    if(!stk.empty()) flag = false;
    if(flag) cout<<"balanced"<<endl;
    else cout<<"not balanced"<<endl;

}