class Solution {
    public double findMaxAverage(int[] arr, int k) {
        double max=0,window=0;

        for(int i=0; i<k;i++){
            window+=arr[i];
        }

        max=window;

        for(int i=k; i<arr.length; i++){
            window+=arr[i]-arr[i-k];
            max=Math.max(max,window);
        }
        return max/k;
    }
}
