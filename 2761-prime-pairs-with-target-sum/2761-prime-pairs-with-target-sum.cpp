class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>>ans;
        int i=2,j=n-2;
        while(i<=j){
            int sum=i+j;
            if(sum==n && isPrime(i) && isPrime(j)){
                ans.push_back({i,j});
            }
            i++;
            j--;
        }
        return ans;
    }
};