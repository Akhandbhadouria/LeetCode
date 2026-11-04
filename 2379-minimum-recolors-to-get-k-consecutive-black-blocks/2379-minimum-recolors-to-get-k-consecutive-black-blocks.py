class Solution(object):
    def minimumRecolors(self, blocks, k):
        """
        :type blocks: str
        :type k: int
        :rtype: int
        """
        i=0
        ans=float('inf')
        while(i+k<=len(blocks)):
           
            st=blocks[i:i+k]
            cnt=st.count('W')
            ans=min(ans,cnt)
            i+=1
        return ans
        