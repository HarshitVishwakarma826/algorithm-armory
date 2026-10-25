class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        for(int i = 0; i < a - 1; i++) {
            temp = temp->next;
        }
        ListNode* first = temp;
        for(int i = 0; i < b - a + 2; i++) {
            temp = temp->next;
        }
        ListNode* last = temp;
        first->next = list2;
        while(list2->next != NULL) {
            list2 = list2->next;
        }
        list2->next = last;
        return list1;
    }
};