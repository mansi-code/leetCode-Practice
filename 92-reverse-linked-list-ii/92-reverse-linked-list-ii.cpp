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
//    ListNode *reverse( ListNode* head){
// ListNode* nextNode, *prevNode= NULL;
// while(head){
// 	nextNode= head->next;
// 	head->next= prevNode;
// 	prevNode= head;
// 	head= nextNode;
// }
//  return prevNode;
// }
    
      ListNode* reverse(ListNode* head){
        
        ListNode* prev = NULL, *next = NULL, *current = head;
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            
        }
        
        return prev;
    }
    
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
ListNode* prev= NULL, *curr= head;
     int count=1;
	while(count!=left){
		prev= curr;
		curr= curr->next;
		count++;
	}
	ListNode* start= curr;
	while(count!= right){
		curr= curr->next;
		count++;
	}
	ListNode* rest = curr->next;
	//prev stores the last value before left to join later
	//start stores the next value or prev->next
	//rest stores the rest of the nodes to be joined later 
	//REVERSE the list from start to curr
	curr->next=NULL;
	ListNode *reversed= reverse(start);
    
	if(prev)
		prev->next= reversed;
	
	curr= reversed;
	while(curr->next!=NULL){
		curr= curr->next;
	}
	curr->next= rest;
	
	if(left==1)
		return reversed;
	else
		return head;
	
}

};