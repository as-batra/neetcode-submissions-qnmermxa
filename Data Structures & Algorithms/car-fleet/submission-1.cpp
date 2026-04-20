class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>vec;
        for(int i=0;i<speed.size();i++){
            vec.push_back({position[i],speed[i]});
        }
        sort(vec.begin(),vec.end());
        stack<double>st;
        for(int i=speed.size()-1;i>=0;i--){
            int p=vec[i].first;
            int s=vec[i].second;
            double t=(double)(target-p)/s;
            st.push(t);
            if(st.size()>=2){
                double top1=st.top();st.pop();
                double top2=st.top();
                if(top1<=top2){}
                else{
                    st.push(top1);
                }
            }
        }
        return st.size();
    }
};
