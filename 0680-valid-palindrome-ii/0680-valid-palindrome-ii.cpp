class Solution {
public:
    bool checkPalindrome(string s,int l,int r){
        while(l<r){
            if(s[l] != s[r]){
                return false;
            }
            else{
                l++;
                r--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0, r=s.size()-1;
        while(l<=r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            
            else{
                if(checkPalindrome(s,l+1,r) || checkPalindrome(s,l,r-1)){
                    return true;
                }
                return false;
            }
        }
        return true;
    }
};