class Solution {
public:

    string encode(vector<string>& strs) {
        string result="";
        for(auto s:strs){
            result+=to_string(s.size())+"#"+s;
        }
        return result;
    }
    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') j++;
            int len = stoi(s.substr(i, j - i));
            j++;
            string word = s.substr(j, len);
            result.push_back(word);
            i = j + len;
        }

        return result;
    }
};
