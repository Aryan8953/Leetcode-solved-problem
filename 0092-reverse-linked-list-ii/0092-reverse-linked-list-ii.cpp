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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        vector<ListNode*> nodes;

        ListNode* curr=head;

        while(curr!=nullptr){
            nodes.push_back(curr);
            curr=curr->next;
        }

        reverse(nodes.begin()+left-1,
        nodes.begin()+right);

        for(int i=0;i<nodes.size()-1;i++){
            nodes[i]->next=nodes[i+1];
        }
        nodes.back()->next=nullptr;

        return nodes[0];
    }
};