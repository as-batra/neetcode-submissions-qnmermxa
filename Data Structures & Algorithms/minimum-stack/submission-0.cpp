class MinStack {
public:
    stack<pair<int,int>> st;
    MinStack() {}
    void push(int val) {
        if(st.empty())st.push({val,val});
        else{
            int min=st.top().second;
        if(min>val)st.push({val,val});
        else st.push({val,min});
        }
        
    }
    
    void pop() {
        if(!st.empty())st.pop();
    }
    
    int top() {
        int val=st.top().first;
        return val;
    }
    
    int getMin() {
        return st.top().second;
    }
};
