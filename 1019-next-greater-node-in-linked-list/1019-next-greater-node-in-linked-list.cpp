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
    vector<int> nextLargerNodes(ListNode* head) {
        stack<pair<int,int>>st;
        int len=0;
        ListNode* curr=head;
        while(curr){
            len++;
            curr=curr->next;
        }
        vector<int>answer(len,0);
        curr=head;
        int i=0;
        while(curr!=NULL){
            while(!st.empty() && st.top().first<curr->val){
                answer[st.top().second]=curr->val;
                st.pop();
            }
            st.push({curr->val,i});
            i++;
            curr=curr->next;
        }
        return answer;
    }
};