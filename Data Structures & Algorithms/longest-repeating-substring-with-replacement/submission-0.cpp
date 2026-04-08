class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int left=0;
        int maxWindow=0;
        int maxfreq=0;
        for(int right=0;right<s.size();right++){
            freq[s[right]-'A']++;
            maxfreq=max(maxfreq,freq[s[right]-'A']);
            int window=right-left+1;
            if(window-maxfreq>k){
                freq[s[left]-'A']--;
                left++;
                window=right-left+1;
            }
            maxWindow = max(maxWindow,window);
            
        }
        return maxWindow;

    }
};
