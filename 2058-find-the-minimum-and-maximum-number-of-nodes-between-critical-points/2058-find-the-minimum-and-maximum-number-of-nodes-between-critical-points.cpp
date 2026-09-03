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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int firstCI=-1;
        int prevCI=-1;
        int currIndex=1;
        ListNode* curr=head->next;
        ListNode* prev=head;
        vector<int>result(2);
        result[0]=INT_MAX;
        while(curr->next!=NULL){
            ListNode* next=curr->next;
            if(curr->val < next->val && curr->val < prev->val|| curr->val > next->val && curr->val > prev->val){
                if(prevCI==-1){
                    firstCI=currIndex;
                    prevCI=currIndex;
                }
                else{
                    result[0]=min(result[0],currIndex-prevCI) ;
                    prevCI=currIndex;
                }
            }
            prev=prev->next;
            curr=curr->next;
            currIndex++; 
        }
        if(firstCI!=-1 && result[0]!=INT_MAX){
            result[1]=prevCI-firstCI;
        }
        else{
            result[0]=-1;
            result[1]=-1;
        }
        return result;
    }
};