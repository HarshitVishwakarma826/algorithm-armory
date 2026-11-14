class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<int>ans;
        int i=0,j=n-1;
        int m=arr[(n-1)/2];
        while(k--){
            if(abs(arr[i]-m)>abs(arr[j]-m)){
                ans.push_back(arr[i]);
                i++;
            }else{
                ans.push_back(arr[j]);
                j--;
            }
        }
        return ans;
    }
};