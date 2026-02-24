class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        vector<int> arr(26,0);

        for(char i: s){
            arr[i-'a']++;
        }

        for(char c: t){
            if(arr[c-'a'] > 0){
                arr[c-'a']--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};