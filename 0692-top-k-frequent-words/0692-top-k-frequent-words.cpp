class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mpp;
        for(auto s:words){
            mpp[s]++;
        }
        vector<string>ans;
        for(auto it:mpp) ans.push_back(it.first);
        auto myComparator=[&](string a,string b){
            if(mpp[a]==mpp[b]) return a<b;
            return mpp[a]>mpp[b];
        };
        sort(ans.begin(),ans.end(),myComparator);
        ans.resize(k);
        return ans;
    }
};