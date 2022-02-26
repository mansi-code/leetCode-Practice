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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp1= list1;
        ListNode *temp2= list2;
        ListNode *result=NULL;
        ListNode *temp=result;
        while(temp1!=NULL && temp2!=NULL){
            ListNode *newNode= new ListNode();
            if(temp1->val<=temp2->val){
                newNode->val=temp1->val;
                temp1=temp1->next;
            }
            else{
                newNode->val=temp2->val;
                temp2=temp2->next;
            }
            
            if(result==NULL){
                result=newNode;
                temp=result;
            }
            else{
                temp->next= newNode;
                temp=temp->next;
            }
        }
        
        while(temp1!=NULL){
            ListNode *newNode= new ListNode(temp1->val);
                temp1=temp1->next;
            if(result==NULL){
                result=newNode;
                temp=result;
            }
            else{
                temp->next= newNode;
                temp=temp->next;
            }
        }
        
        while(temp2!=NULL){
            ListNode *newNode= new ListNode(temp2->val);
                temp2=temp2->next;
            if(result==NULL){
                result=newNode;
                temp=result;
            }
            else{
                temp->next= newNode;
                temp=temp->next;
            }
        }
        return result;
    }
};