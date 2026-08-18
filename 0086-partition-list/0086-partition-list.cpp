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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small=new ListNode(0);
        ListNode* large=new ListNode(0);
        ListNode* sml=small;
        ListNode* lrg=large;
        while(head!=NULL){
        if(head->val<x){
            sml->next=head;
            sml=sml->next;
        }
        else{
            lrg->next=head;
            lrg=lrg->next;
        }
        head=head->next;
        }
          lrg->next=NULL;
          sml->next=large->next;
          return small->next;
    }
};