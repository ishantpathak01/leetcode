class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        ListNode* temp=head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int size = count/ k;
        int  extra = count % k;
         temp = head;
        for (int i = 0; i < k; i++) {
            ans.push_back(temp);
            int cnt = size + (extra > 0);
            extra -= (extra > 0);

            for (int j = 1; j < cnt && temp; j++)
                temp = temp->next;
            if (temp) {
                ListNode* next = temp->next;
                temp->next = NULL;
                temp = next;
            }
        }

        return ans;
    }
};