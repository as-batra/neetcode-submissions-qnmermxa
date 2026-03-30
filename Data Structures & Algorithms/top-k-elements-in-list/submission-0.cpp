class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>>buckets(n+1);
        unordered_map<int,int>mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        for(auto [key,val]:mpp){
            buckets[val].push_back(key);
        }
        vector<int>ans;
        for(int i=n;i>=0 && ans.size()<k;--i){
            for(int num:buckets[i]){
                ans.push_back(num);
                if(ans.size()==k)return ans;
            }
        }
        return ans;
        
    }
};
