class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> um;
        for(int i: nums1){
            um[i]++;
        }

        vector<int> arr;
        for(int i:nums2){
            if(um.count(i) >0){
                arr.push_back(i);
                um.erase(i);
            } 
        }
        return arr;
    }
};