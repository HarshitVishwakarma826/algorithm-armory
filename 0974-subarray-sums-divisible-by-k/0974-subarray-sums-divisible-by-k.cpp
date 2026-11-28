class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int total=0,rem,prefixsum=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            rem=prefixsum%k;
            if(rem<0) rem=rem+k;
            if(mpp.count(rem)){
                total+=mpp[rem];
            }
            mpp[rem]++;
        }
        return total;
    }
};