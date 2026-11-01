class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int>st;
        vector<int>arr(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && nums2[st.top()]<nums2[i]){
                arr[st.top()]=nums2[i];
                st.pop();
            }
            st.push(i);
        }
        vector<int>ans(nums1.size(),-1);
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < n; j++) {
                if(nums1[i] == nums2[j]) {
                    ans[i] = arr[j];
                    break;
                }
            }
        }
        return ans;
    }
};