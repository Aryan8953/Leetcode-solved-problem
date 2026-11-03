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
        if(head==nullptr) return head;
        
        ListNode* temp=head;
        unordered_set<int> seen;
        seen.insert(temp->val);
        while(temp->next!=nullptr){
            if (seen.count(temp->next->val)){
                ListNode* dupplicate=temp->next;
                temp->next=temp->next->next;
                delete dupplicate;
            }
            else{
                seen.insert(temp->next->val);
                temp=temp->next;

            }
        }
        return head;


        
    }
};