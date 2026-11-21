class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* first=new ListNode(0);
        first->next=head;
        head=first;
        while(first->next!=NULL){
            int x=k;
            ListNode* temp=first;
            while(x-- && temp->next){
                temp=temp->next;
            }
            if(x>=0) return head->next;
            x=k;
            ListNode* second=first->next;
            ListNode* prev=first;
            ListNode* curr=first->next;
            while(x-- && curr){
                ListNode* front=curr->next;
                curr->next=prev;
                prev=curr;
                curr=front;
            }
            first->next=prev;
            second->next=curr;
            first=second;
        }
        return head->next;
    }
};