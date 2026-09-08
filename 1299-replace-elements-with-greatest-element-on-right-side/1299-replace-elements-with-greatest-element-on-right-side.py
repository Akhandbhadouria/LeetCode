class Solution(object):

    def replaceElements(self, arr):
        ans = []
        max_elem = -1

        for i in range(len(arr)-1, -1, -1):
            ans.append(max_elem)
            max_elem = max(arr[i], max_elem)

        ans.reverse()
        return ans