class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1="",ans2="";
        for(char c:s){
            if(c=='#'){
                if(!ans1.empty()) ans1.pop_back();
            }else{
                ans1.push_back(c);
            }
        }
        for(char c:t){
            if(c=='#'){
                if(!ans2.empty()) ans2.pop_back();
            }else{
                ans2.push_back(c);
            }
        }
        return ans1==ans2;
    }
};