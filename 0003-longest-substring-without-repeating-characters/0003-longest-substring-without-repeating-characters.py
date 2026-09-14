class Solution(object):
    def lengthOfLongestSubstring(self, stri):
        """
        :type s: str
        :rtype: int
        """
        if stri=="":
            return 0


        s=0
        e=0
        ans=0
        st=set()
        for c in stri:
            if c in st:
                while c in st:
                    
                    st.remove(stri[s])
                    s+=1
            st.add(c)        
            ans=max(ans,(e-s))
            
            e+=1
        return ans+1
        