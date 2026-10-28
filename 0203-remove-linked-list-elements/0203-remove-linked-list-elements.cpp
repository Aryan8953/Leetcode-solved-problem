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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* temp=dummy;

        
        
        while(temp->next!=NULL){
        
            if (temp->next->val==val){
                ListNode* duplicate = temp->next;
                temp->next=temp->next->next;
                delete duplicate;
            }
            else{
            temp=temp->next;
            }
        }
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};