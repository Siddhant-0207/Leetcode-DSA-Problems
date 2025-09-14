class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if (n != m)
            return false;
        vector<int> hashtable(26, 0);
        for (int i = 0; i < n; i++) {
            hashtable[s[i] - 'a']++;
            hashtable[t[i] - 'a']--;
        }
        for (int i = 0; i <26; i++) {
            if (hashtable[i] != 0)
                return false;
        }
        return true;
    }
    };