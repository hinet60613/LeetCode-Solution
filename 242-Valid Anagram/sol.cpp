class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int cnt[26];
        for(int i=0; i<26; i++) {
            cnt[i] = 0;
        }
        int len = s.size();
        for(int i=0; i<len; i++) {
            cnt[s[i]-'a']++;
        }
        len = t.size();
        for(int i=0; i<len; i++) {
            cnt[t[i]-'a']--;
        }
        for(int i=0; i<26; i++) {
            if(cnt[i] != 0) {
                return false;
            }
        }
        return true;
    }
};
