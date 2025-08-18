class Solution {
    public boolean isPalindrome(String s) {
        s=s.toLowerCase().replaceAll("[^a-z0-9]","");
        int lower=0;
        int higher=s.length()-1;

        while(lower < higher){
            if(s.charAt(lower) != s.charAt(higher)){
                return false;
            }
            lower++;
            higher--;
        }
        return true;
    }
}
