class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s = to_string(n);
        int len = s.size();
        int idx = len;
        for (int i = len - 1; i > 0; i--) {
            if (s[i] < s[i - 1]) {
                s[i - 1]--;
                idx = i;
            }
        }
        for (int i = idx; i < len; i++) {
            s[i] = '9';
        }
        return stoi(s);
    }
};