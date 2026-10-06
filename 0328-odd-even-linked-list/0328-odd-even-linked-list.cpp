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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        std::vector<int>odd_vals;
        std::vector<int>even_vals;

        ListNode* current=head;
        int index=1;

        while(current!=nullptr){
            if(index%2!=0){
                odd_vals.push_back(current->val);
            }
            else{
                even_vals.push_back(current->val);
            }
            current=current->next;
            index++;
        }

        current=head;
        for(int val:odd_vals){
            current->val=val;
            current=current->next;
        }
        for(int val:even_vals){
            current->val=val;
            current=current->next;
        }
        return head;
    }
};