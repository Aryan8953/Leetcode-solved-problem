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
    ListNode* reverseList(ListNode*head){
        ListNode* prev=NULL;
        ListNode* curr=head;

        while(curr!=NULL){
            ListNode* next=curr->next;//to ensure rest node will not lost

            curr->next=prev; //curr ka link reverse

            prev=curr; // pointers ange badhao
            curr=next;

        }
        return prev; //reverse list ka new head
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* secondHalf=reverseList(slow->next);
        ListNode* firstHalf=head;

        while(secondHalf!=NULL){
            if(firstHalf->val!=secondHalf->val) return false;
            
            firstHalf=firstHalf->next;
            secondHalf=secondHalf->next;
        }
        return true;
        
    }
};