class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();int n2=s2.size();
        vector<int>freq1(26,0),freq2(26,0);
        for(int i=0;i<n1;i++){
            freq1[s1[i]-'a']++;
        }
        int left=0;
        for(int right=0;right<n2;right++){
            freq2[s2[right]-'a']++;
            int window=right-left+1;
            if(window>n1){
                freq2[s2[left]-'a']--;
                left++;
            }
            if(freq1==freq2)return true;
        }
        return false;
    }
    
};
