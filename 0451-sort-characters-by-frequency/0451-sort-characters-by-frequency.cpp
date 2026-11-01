class Solution {
public:
    string frequencySort(string s) {
        vector<int>freq(256,0);
        for(auto ch:s) freq[ch]++;
        vector<char>arr(s.begin(),s.end());
        auto myComparator=[&](char a,char b){
            if(freq[a]!=freq[b]) return freq[a]>freq[b];
            return a<b;
        };
        sort(arr.begin(),arr.end(),myComparator);
        return string(arr.begin(),arr.end());
    }
};