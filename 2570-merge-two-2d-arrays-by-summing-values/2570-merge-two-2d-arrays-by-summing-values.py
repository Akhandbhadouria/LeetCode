class Solution(object):
    def mergeArrays(self, nums1, nums2):
        mp1,mp2={},{}
        st=set()
        for i,j in nums1:
            mp1[i]=j
            st.add(i)
        for i,j in nums2:
            mp2[i]=j
            st.add(i)
        ans=[]
        for i in sorted(st):
            if i in mp1 and i in mp2:
                ans.append([i,mp1[i]+mp2[i]]) 
            elif i in mp1:
                ans.append([i,mp1[i]])
            else:
                ans.append([i,mp2[i]])
        return ans

        