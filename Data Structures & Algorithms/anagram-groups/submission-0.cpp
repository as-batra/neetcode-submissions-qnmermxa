class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        map<vector<int>,vector<string>>mpp;
        for(auto str:strs){
            vector<int>vec(26,0);
            for(int i=0;i<str.size();i++){
                vec[str[i]-'a']++;
            }
            mpp[vec].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto [key,val]:mpp){
            ans.push_back(val);
        }
        return ans;
    }
};
