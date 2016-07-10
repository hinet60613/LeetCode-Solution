class Solution {
public:
    string reverseString(string s) {
        string ans = string();
        while(s.size() != 0) {
            ans.push_back(s.back());
            s.pop_back();
        }
        return ans;
    }
};

