# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        l1 = []
        l2 = []
        while list1 is not None:
            l1.append(list1.val)
            list1 = list1.next
        while list2 is not None:
            l1.append(list2.val)
            list2 = list2.next
        l1.sort()
        if not l1:
            head = ListNode()
            return head.next
        else:
            head = ListNode(l1[0])
            current = head

            for val in l1[1:]:
                current.next = ListNode(val)
                current = current.next
        
            return head
        
