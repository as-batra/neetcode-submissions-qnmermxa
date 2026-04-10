class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int>st;
        st.push(n-1);
        vector<int>result(n,0);
        for(int i=n-2;i>=0;i--){
            if(temperatures[st.top()]>temperatures[i]){
                result[i]=st.top()-i;
                st.push(i);
            }
            else{
                while(!st.empty()){
                    
                    if(temperatures[st.top()]>temperatures[i]){
                        result[i]=st.top()-i;
                        break;
                    }
                    st.pop();
                }
                st.push(i);
            }

        }
        return result;
    }
};
