class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>vec(26,0);
        int n=s.size();int m=t.size();
        if(n!=m)return false;
        for(int i=0;i<n;i++){
            vec[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            vec[t[i]-'a']--;
            if(vec[t[i]-'a']<0)return false;
        }
        return true;

    }
};
