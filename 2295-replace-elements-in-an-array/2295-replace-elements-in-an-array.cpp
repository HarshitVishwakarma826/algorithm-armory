class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]=i;
        }
        for(auto op:operations){
            int oldval=op[0];
            int newval=op[1];
            int idx=mpp[oldval];
            nums[idx]=newval;
            mpp.erase(oldval);
            mpp[newval]=idx;
        }
        return nums;
    }
};