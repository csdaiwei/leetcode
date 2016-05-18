# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        l3 = None
        carry = 0
        p1, p2, p3 = l1, l2, l3
        while(p1!=None and p2!=None):
            v = p1.val + p2.val + carry
            carry = v/10
            
            if l3 == None:
                l3 = ListNode(v%10)
                p3 = l3
            else:
                p3.next = ListNode(v%10)
                p3 = p3.next
            
            p1 = p1.next
            p2 = p2.next

        p = p1 if p1!=None else p2
        while(p!=None):
            v = p.val + carry
            carry = v/10
            p = p.next
            if l3 == None:
                l3 = ListNode(v%10)
                p3 = l3
            else:
                p3.next = ListNode(v%10)
                p3 = p3.next

        if carry != 0:
            p3.next = ListNode(1)

        return l3