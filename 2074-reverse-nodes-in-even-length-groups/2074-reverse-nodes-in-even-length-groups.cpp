class Solution {
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* first=new ListNode(0);
        first->next=head;
        head=first;
        int k=1;
        while(first->next!=NULL){
            int cnt=0;
            ListNode* temp=first;
            while(cnt<k && temp->next){
                temp=temp->next;
                cnt++;
            }
            ListNode* second=first->next;
            ListNode* curr=first->next;
            if(cnt % 2==0){
                ListNode* prev=first;
                int x=cnt;
                while(x-- && curr){
                    ListNode* front=curr->next;
                    curr->next=prev;
                    prev=curr;
                    curr=front;
                }
                first->next=prev;
                second->next=curr;
                first=second;
            }else{
                while(cnt--){
                    first=first->next;
                }
            }
            k++;
        }
        return head->next;
    }
};