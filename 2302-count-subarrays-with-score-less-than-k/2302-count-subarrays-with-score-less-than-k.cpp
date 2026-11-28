class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        int l=0,r=0;
        long long total=0,sum=0;
        while(r<n){
            sum=sum+nums[r];
            while((sum*(r-l+1))>=k){
                sum=sum-nums[l];
                l++;
            }
            total=total+(r-l+1);
            r++;
        }
        return total;
    }
};