/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=0;
        ListNode* curr=head;
        while(curr){
            n++;
            curr=curr->next;
        }
        int size=n/k;
        int rem=n%k;
        vector<ListNode*>ans(k,NULL);
        curr=head;
        for(int i=0;i<k;i++){
            ans[i]=curr;
            int len=size;
            if(rem>0){
                len++;
                rem--;
            }
            for(int j=1;j<len;j++){
                curr=curr->next;
            }
            if(curr){
                ListNode* nextNode=curr->next;
                curr->next=NULL;
                curr=nextNode;
            }
        }
        return ans;
    }
};