class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>vec(256,0);
        int left=0,right=0;
        int max_size=0;
        while(right<s.size()){

            vec[s[right]]++;
            while(vec[s[right]]>1){
                vec[s[left]]--;
                left++;
            }
            max_size=max(max_size,right-left+1);
            right++;
        }
        return max_size;
    }
};
