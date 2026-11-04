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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=head;

        while(curr!=NULL && curr->next!=NULL){      //this conditon can not be back and forth
            if(curr->val==curr->next->val){
                ListNode* dupplicate=curr->next;
                curr->next=curr->next->next; /// not doing curr=curr->next because kyuki 3rd node bhi same hoskta hai
                delete dupplicate;
            }
            else{
                curr=curr->next;
            }

        }
        return head;
    }
};