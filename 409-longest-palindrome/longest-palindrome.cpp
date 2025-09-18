class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lower(26, 0), upper(26, 0);

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                lower[s[i] - 'a']++;
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                upper[s[i] - 'A']++;
            }
        }

        int count = 0;
        bool oddFound = false;

        // lowercase counts
        for (int i = 0; i < 26; i++) {
            if (lower[i] % 2 == 0)
             count += lower[i];
            else 
            { count += lower[i] - 1; 
            oddFound = true; }
        }

        // uppercase counts
        for (int i = 0; i < 26; i++) {
            if (upper[i] % 2 == 0) count += upper[i];
            else { count += upper[i] - 1; oddFound = true; }
        }

        // we can place exactly 1 odd char in the center
        if (oddFound) count++;

        return count;
    }
};
