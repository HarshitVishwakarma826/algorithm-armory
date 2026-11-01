class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(auto it:nums) mpp[it]++;
        vector<int>ans;
        for(auto it:mpp) ans.push_back(it.first);
        auto myComparator=[&](int a,int b){
            return mpp[a]>mpp[b];
        };
        sort(ans.begin(),ans.end(),myComparator);
        ans.resize(k);
        return ans; 
    }
};