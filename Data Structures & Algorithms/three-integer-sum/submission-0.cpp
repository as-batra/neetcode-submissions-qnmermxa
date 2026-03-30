class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        set<vector<int>>timepass;
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    vector<int>combo;
                    if(nums[i]+nums[j]+nums[k]==0){
                        combo.push_back(nums[i]);combo.push_back(nums[j]);
                        combo.push_back(nums[k]);
                        sort(combo.begin(),combo.end());
                        timepass.insert(combo);
                    }
                }
            }
        }
        for(auto x:timepass){
            ans.push_back(x);
        }
        return ans;
    }
};
