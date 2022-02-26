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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     
        ListNode* temp1= l1;
        ListNode *temp2= l2;
        int sum=0; 
        int carry=0;
        ListNode *result=NULL;
        ListNode *temp = result;
        while(temp1!=NULL && temp2!=NULL){
            sum=temp1->val+ temp2->val+carry;
            carry= sum/10;
            ListNode *newNode= new ListNode(sum%10);
            if(result==NULL){
                result=newNode;
                temp=result;
            }
            else
            {
                temp->next= newNode;
                temp=temp->next;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        
        while(temp1!=NULL){
            sum=temp1->val+carry;
            carry= sum/10;
            ListNode *newNode= new ListNode(sum%10);
            temp->next=newNode;
            temp=temp->next;
            temp1=temp1->next;
        }
        
         while(temp2!=NULL){
            sum=temp2->val+carry;
            carry= sum/10;
            ListNode *newNode= new ListNode(sum%10);
            temp->next=newNode;
            temp=temp->next;
            temp2=temp2->next;
        }
        
        if(carry!=0){
            ListNode *newNode= new ListNode(carry);
            temp->next = newNode;
            temp=temp->next;
        }
            
        return result;
    }
};