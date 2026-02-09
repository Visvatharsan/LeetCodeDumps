class Solution {
public:
    string removeStars(string s) {
        vector<char> x;
        for(int i=0; i<s.size(); i++){
            if(s[i] != '*'){
                x.push_back(s[i]);
            }
            else{
                if(x.size()>0){
                    x.pop_back();
                }
            }
        }

        return string(x.begin(), x.end());
    }
};