class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int x:st){
            if(st.find(x-1)==st.end()){
                int current=x;
                int length=1;
                while(st.find(current+1)!=st.end()){
                    length++;
                    current++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
    }
};
