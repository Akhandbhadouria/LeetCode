# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: Optional[ListNode]
        :type n: int
        :rtype: Optional[ListNode]
        """
        

        temp=head
        s=0
        while temp:
            temp=temp.next
            s+=1
        pos=s-n
        if pos==0:
            return head.next
        curr=head
        while pos>1:
            pos-=1
            curr=curr.next
        curr.next=curr.next.next
        return head

        