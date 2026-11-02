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
        
        vector<int> values;

        ListNode*curr=list1;

        while(curr!=nullptr){
            values.push_back(curr->val);
            curr=curr->next;
        }

        curr=list2;

        while(curr!=nullptr){
            values.push_back(curr->val);
            curr=curr->next;
        }

        sort(values.begin(),values.end());

        ListNode dummy(0);
        ListNode*tail=&dummy;

        for(int value :values){
            tail->next=new ListNode(value);
            tail=tail->next;
        }
        return dummy.next;

    }
};