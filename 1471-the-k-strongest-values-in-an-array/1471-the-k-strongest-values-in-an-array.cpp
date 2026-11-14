class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int m=arr[(n-1)/2];
        auto myComparator=[&](int a,int b){
            if(abs(a-m)==abs(b-m)) return a>b;
            return abs(a-m)>abs(b-m);
        };
        sort(arr.begin(),arr.end(),myComparator);
        vector<int>ans;
        for(int i=0;i<k;i++) ans.push_back(arr[i]);
        return ans;
    }
};