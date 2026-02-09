class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> x;
        stack<char> y;

        for(char i:s){
            if(i == '#'){
                if(!x.empty()){
                    x.pop();
                }
            }
            else{
                x.push(i);
            }
        }

        for(char i:t){
            if(i == '#'){
                if(!y.empty()){
                    y.pop();
                }
            }
            else{
                y.push(i);
            }
        }

        if(x.size() == y.size()){
            while(!x.empty()){
                if(x.top() != y.top()){
                    return false;
                }
                else{
                    x.pop();
                    y.pop();
                }
            }
        }
        else{
            return false;
        }
        return true;
    }
};