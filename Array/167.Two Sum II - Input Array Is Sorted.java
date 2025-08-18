class Solution {
    public int[] twoSum(int[] arr, int target) {
        int left = 0;
        int right = arr.length-1;

        while(left < right){
            int total = arr[left]+arr[right];
            if(total == target){
                return new int[] {left+1, right+1};
            }
            else if(total > target){
                right--;
            }
            else{
                left++;
            }
        }
        return new int[] {-1,-1};
    }
}
