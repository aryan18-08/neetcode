class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int count = 0;
        unordered_set<char> st;

        int j = 0;

        for (int i = 0; i < n; i++) {

            while (st.find(s[i]) != st.end()) {
                st.erase(s[j]);
                j++;
            }

            st.insert(s[i]);
            count = max(count, i - j + 1);
        }

        return count;
    }
};