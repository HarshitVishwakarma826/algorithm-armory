class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        int ways=9;
        int available=9;
        int ans=10;
        for(int i=2;i<=n && i<=10;i++){
            ways=ways*available;
            ans=ans+ways;
            available--;
        }
        return ans;
    }
};