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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL)
            return head;
        ListNode *prev= head;
        if(prev->next==NULL)
            return head;
        ListNode *curr=head->next;
        while(prev->next!=NULL){
            if(prev->val== curr->val){
                prev->next= curr->next;
                curr=curr->next;
            }
            else
            {
                prev= prev->next;
                curr= curr-> next;
            }
        }
        return head;
    }
};