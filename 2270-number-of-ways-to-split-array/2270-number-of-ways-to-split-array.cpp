class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
        for(int x:nums) sum+=x;
        long long leftsum=0;
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            leftsum+=nums[i];
            long long rightsum=sum-leftsum;
            if(leftsum>=rightsum) ans++;
        }
        return ans;
    }
};