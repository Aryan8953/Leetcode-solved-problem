# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        arr=[]
        while list1:
            arr.append(list1.val)
            list1=list1.next
        while list2:
            arr.append(list2.val)
            list2=list2.next
        arr.sort()
        dummy=ListNode(0)
        curr=dummy
        for val in arr:
            curr.next=ListNode(val)
            curr=curr.next
        return dummy.next
