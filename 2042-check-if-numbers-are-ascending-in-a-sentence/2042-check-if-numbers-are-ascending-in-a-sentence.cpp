class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>arr;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])) {
                int num = 0;
                while(i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                arr.push_back(num);
            }
        }
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>=arr[i+1]) return false;
        }
        return true;
    }
};