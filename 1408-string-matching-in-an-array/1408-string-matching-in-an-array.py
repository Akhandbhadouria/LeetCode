class Solution(object):
    def stringMatching(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        ans=[]
        for i in range(0,len(words)):
            for j in range(0,len(words)):
                if words[i]==words[j]:
                    continue
                else:
                    if words[i] in words[j]:
                        ans.append(words[i])
                        break
        return ans
        