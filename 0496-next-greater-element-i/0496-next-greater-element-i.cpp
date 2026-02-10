class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;

        for(int i=0; i<nums1.size(); i++){
            int n=nums1[i];
            int x=-1;
            bool flag=false;
            for(int j=0; j<nums2.size(); j++){
                if(nums2[j] == n){
                    flag=true;
                }
                if(flag){
                    if(nums2[j] > n){
                        x=nums2[j];
                        break;
                    }
                }
            }
            mp[n]=x;
        }

        vector<int> arr;
        for(int i=0; i<nums1.size(); i++){
            arr.push_back(mp[nums1[i]]);
        }
        return arr;
    }
};