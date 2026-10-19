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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy=head;
        int c=0;
        while(dummy!=NULL && c<k){
            dummy=dummy->next;
            c++;
        }
        if(c<k){
            return head;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        int count=0;
        while(curr!=NULL && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
     head->next = reverseKGroup(curr, k);
        return prev;
    }
};