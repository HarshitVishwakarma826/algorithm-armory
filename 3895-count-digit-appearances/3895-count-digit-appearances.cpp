class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]){
                int rem=nums[i]%10;
                nums[i]=nums[i]/10;
                if(rem==digit) ans++;
            }
        }
        return ans;
    }
};