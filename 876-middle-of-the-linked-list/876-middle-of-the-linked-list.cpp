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
    ListNode* middleNode(ListNode* head) {
        
        int length= 0;
        ListNode* temp= head;
        if(head==NULL)
            return head;
        if(head->next==NULL)
            return head;
        
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        temp=head;
        int mid= length/2;
        for(int i=0; i<mid; i++){
            temp=temp->next;
        }
        
        return temp;
    }
};