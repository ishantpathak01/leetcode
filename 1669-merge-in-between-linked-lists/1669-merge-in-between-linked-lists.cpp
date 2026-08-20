class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* temp =list1 ;
        for(int i = 0; i < a - 1; i++) {
            temp = temp->next;
        }
        ListNode* first = temp;
        temp = list1;
        for(int i = 0; i < b; i++) {
            temp = temp->next;
        }
        ListNode* remaining = temp->next;
        first->next = list2;
        while(list2->next != NULL) {
            list2 = list2->next;
        }
        list2->next = remaining;
        
        return list1;
    }
};