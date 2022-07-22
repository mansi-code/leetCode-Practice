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
        ListNode* smaller= NULL;
        ListNode* greater= NULL;
        ListNode* curr= head;
        ListNode* smaller_head= NULL;
        ListNode* greater_head= NULL;
        
        if(curr==NULL)
            return curr;
       
        
        while(curr){
            if(curr->val >=x){
                if(greater_head==NULL){
                    greater_head= curr;
                    greater=curr;
                }
                    
                else{
                    greater->next= curr;
                    greater= greater->next;
                }
                    
            }
            else{
                 if(smaller_head==NULL){
                       smaller= curr;
                        smaller_head= curr;
                    }
                else{
                    smaller->next= curr;
                    smaller= smaller->next;
                }
            }
            curr= curr->next;
        }
        
        if(smaller_head==NULL && greater_head!=NULL){
            greater->next= NULL;
            return greater_head;
        }
        else if( smaller_head!=NULL && greater_head==NULL)
        {
            smaller->next= NULL;
            return smaller_head;
        }
        else
        {
            greater->next= NULL;
            smaller->next= greater_head;
            
        }
        return smaller_head;
        
    }
};

 // ListNode* partition(ListNode* head, int x) {
 //     ListNode *lesser = new ListNode(-1), *greater = new ListNode(-1), *lesser_head = lesser, *greater_head = greater;
 //     while(head){
 //         if(head -> val < x) 
 //                lesser -> next = head, lesser = lesser -> next;
 //         else 
 //                greater -> next = head, greater = greater -> next;
 //         head = head -> next; 
 //     }
 //     greater -> next = NULL;
 //     lesser -> next = greater_head -> next;
 //     return lesser_head -> next;
 // }