class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto num:tokens){
            if(num=="+"||num=="-"||num=="/"||num=="*"){
                if(st.empty())return -1;
                int num2=st.top();st.pop();
                 if(st.empty())return -1;
                int num1=st.top();st.pop();
                int val=0;
                if(num=="+"){
                    val=num1+num2;
                }
                else if(num=="-"){
                     val=num1-num2;
                }
                else if(num=="*"){
                     val=num1*num2;
                }
                else  val=num1/num2;
                st.push(val);
            }
            else{
                int no=stoi(num);
                st.push(no);
            }
        }
        return st.top();
    }
};
