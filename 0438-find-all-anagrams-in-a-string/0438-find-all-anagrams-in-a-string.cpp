class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.size() > s.size()) return ans;

        vector<int> count(26, 0);

        for(char c : p)
            count[c - 'a']++;

        int left = 0, right = 0, k = p.size();

        while(right < s.size()) {
            if(count[s[right] - 'a'] > 0)
                k--;

            count[s[right] - 'a']--;
            right++;

            if(k == 0)
                ans.push_back(left);

            if(right - left == p.size()) {
                if(count[s[left] - 'a'] >= 0)
                    k++;

                count[s[left] - 'a']++;
                left++;
            }
        }

        return ans;
    }
};