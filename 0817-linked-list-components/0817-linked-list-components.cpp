class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto num:nums) mpp[num]++;
        int ans=0;
        bool flag=false;
        while(head){
            if(mpp[head->val]==0 && flag){
                ans++;
                flag=false;
            }else if(mpp[head->val]==1){
                flag=true;
            }
            head=head->next;
        }
        if(flag) ans++;
        return ans;
    }
};