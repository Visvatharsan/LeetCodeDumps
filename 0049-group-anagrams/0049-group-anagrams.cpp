class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;

        for(string i: strs){
            string word=i;
            sort(word.begin(), word.end());
            um[word].push_back(i);
        }

        vector<vector<string>> arr;

        for(auto i:um){
            arr.push_back(i.second);
        }
        return arr;
    }
};