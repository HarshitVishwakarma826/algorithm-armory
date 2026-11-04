class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev=head, *curr=head->next;
        int index=1;
        int first=-1,last=-1,minDist=INT_MAX;
        while(curr->next!=NULL){
            ListNode* next=curr->next;
            if((curr->val > prev->val && curr->val>next->val ) ||
            (curr->val<prev->val && curr->val < next->val)){
                if(first==-1) first=index;
                else minDist=min(minDist,index-last);
                last=index;
            }
            prev=curr;
            curr=next;
            index++;
        }
        if(first==last) return {-1,-1};
        return {minDist,last-first};
    }
};