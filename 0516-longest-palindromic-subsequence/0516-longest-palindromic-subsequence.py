class Solution(object):

    def longestPalindromeSubseq(self, s):
        a=len(s)
        dp=[[0]* (a+1)  for _ in range(a+1)]
        new_s=s[::-1]
        for i in range (1,a+1):
            for j in range (1,a+1):
                if s[i-1]==new_s[j-1]:
                    dp[i][j]=dp[i-1][j-1]+1
                else:
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1])
                
        return dp[a][a]

    
        