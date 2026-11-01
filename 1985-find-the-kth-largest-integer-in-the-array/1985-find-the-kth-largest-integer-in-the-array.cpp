class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        auto myComparator=[&](string a,string b){
            if(a.size()==b.size())
            return a>b;
            return a.size()>b.size();
        };
        sort(nums.begin(),nums.end(),myComparator);
        return nums[k-1];
    }
};