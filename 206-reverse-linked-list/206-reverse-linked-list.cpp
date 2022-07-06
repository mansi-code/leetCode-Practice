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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        
        ListNode* temp= head;
        ListNode* node= new ListNode(temp->val);
        ListNode* newNode= new ListNode();
        newNode= reverseList(head->next);
        
        
        ListNode* temp2= newNode;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next= node;
        return newNode;
    }
    
};