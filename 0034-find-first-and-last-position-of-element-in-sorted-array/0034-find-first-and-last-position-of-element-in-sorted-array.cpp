class Solution {
public:
    // int first(vector<int>& nums, int target){
    //     int start=0, end=nums.size()-1;
    //     int mid,first;

    //     while(start<=end){
    //         mid=(start+end)/2;
    //         if(nums[mid]>=target){
    //             if(nums[mid] == target)
    //                 first=mid;
    //             start=mid+1;
    //         }
    //         else{
    //             start=mid+1;
    //         }
    //     }
    //     return -1;
    // }

    // int last(vector<int>& nums, int target){
    //     int start=0, end=nums.size()-1;
    //     int mid,last=-1;

    //     while(start<=end){
    //         mid=(start+end)/2;
    //         if(nums[mid]>=target){
    //             if(nums[mid] == target)
    //             first=mid;
    //             end=mid-1;
    //         }
    //         else{
    //             start=mid+1;
    //         }
    //     }
    //     return -1;
    // }


    vector<int> searchRange(vector<int>& nums, int target) {
        int startingPosition = -1, endingPosition = -1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                startingPosition = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i] == target){
                endingPosition = i;
                break;
            }
        }
        return {startingPosition, endingPosition};
    }
};