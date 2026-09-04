# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def sortList(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        pq=[]
        temp=head
        while temp:
            heapq.heappush(pq,temp.val)
            temp=temp.next
        n_head=ListNode(0)
        curr=n_head
        for i in range(len(pq)):
            nn=ListNode(pq[0])
            curr.next=nn
            curr=nn
            heapq.heappop(pq)
        return n_head.next

        