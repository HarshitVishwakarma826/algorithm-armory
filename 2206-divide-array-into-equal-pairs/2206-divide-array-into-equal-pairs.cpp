class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        int pairs=n/2;
        map<int,int>mpp;
        for(int num:nums) mpp[num]++;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second%2!=0) return false;
        }
        return true;
    }
};