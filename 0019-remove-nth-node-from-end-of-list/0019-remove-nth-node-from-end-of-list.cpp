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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    
        ListNode * dummy=new ListNode(0);
        dummy->next=head;

        int count=0;
        ListNode * temp=head;
        while (temp!=NULL){
            temp=temp->next;
            count++;
        }

        ListNode* prev=dummy;
        for(int i=0;i<count-n;i++){
            prev=prev->next;
        }

         //remove target node

         ListNode* toDelete=prev->next;
         prev->next=prev->next->next;
         delete toDelete;

         //return new head
        
        ListNode* newHead=dummy->next;
        delete dummy;
        
        return newHead;
    }
};