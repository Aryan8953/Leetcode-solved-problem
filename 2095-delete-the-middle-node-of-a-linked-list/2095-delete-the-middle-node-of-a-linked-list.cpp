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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return nullptr;

        ListNode* curr=head;
        int length=1;

        while(curr->next!=NULL){
            length++;
            curr=curr->next;
        }

        int middle=length/2;

        curr=head;
        for(int i=0;i<middle-1;i++){
            curr=curr->next;
        }

        ListNode* temp=curr->next;
        curr->next=temp->next;

        delete temp;

        return head;
    }
};