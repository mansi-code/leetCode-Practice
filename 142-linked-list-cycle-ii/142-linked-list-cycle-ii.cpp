/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode *slow = head, *fast = head;
//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//             if (slow == fast) break;
//         }
//         if (!(fast && fast->next)) return NULL;
//         while (head != slow) {
//             head = head->next;
//             slow = slow->next;
//         }
//         return head;
//     }
// };
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow= head;
        ListNode* fast= head;
        
        if(head==NULL)
            return head;
        
        while(fast && fast->next){
            slow= slow->next;
            fast=fast->next->next;
            if(fast==slow) break;
        }
        
        if(!(fast && fast->next)) return NULL; 
        
        while(head!= slow){
            head=head->next;
            slow= slow->next;
        }
        
//         if(slow->next && fast->next->next){
//          slow= slow->next;
//         fast= fast->next->next;
//         }
//         else
//             return NULL;
        
//         while(slow!=fast && fast->next->next && fast && fast->next){
//             slow=slow->next;
//             fast= fast->next->next;
//         }
        
//         return fast->next;
        
        return  head;
    }
};