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
    ListNode* middleNode(ListNode* head) {
        if(!head || !head->next) return head;
        int count=0;
        ListNode* temp1=head;
        ListNode* temp2=head;
        while(temp1!=nullptr){
            count+=1;
            temp1=temp1->next;
        }                             
        for(int i=0;i<=count/2-1;i++){
        
            temp2=temp2->next;
        }
        return temp2;
    }
};