class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
        for(int i:s){
            if(i=='(' || i=='{' || i=='['){
                ans.push(i);
            }
            else{  
                if(ans.empty()){
                    return false;
                }
                if ( (ans.top() == '(' && i==')') || (ans.top() == '{' && i=='}') || (ans.top() == '[' && i==']') ){
                    ans.pop();
                }
                else{
                    return false;
                }
                
            }
        }

        if(ans.size()==0) return true;
        return false;
    }
};