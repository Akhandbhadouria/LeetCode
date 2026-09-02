# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def oddEvenList(self, head):
        if not head or not head.next:
            return head
        od=head
        evn=head.next
        temp=evn
        while evn and evn.next:
            od.next=evn.next
            od=od.next
            evn.next=evn.next.next
            evn=evn.next
        od.next=temp
        return head

        