class Solution {
public:
    bool checkString(string s) {
        bool foundB=false;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='b') foundB=true;
            else if(foundB) return false;
        }
        return true;
    }
};