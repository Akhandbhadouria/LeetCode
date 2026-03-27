class Solution(object):
    def solve(self,s,t,i,j,dp):
        if j==len(t):
            return 1
        if i==len(s):
            return 0
        if dp[i][j]!=-1:
            return dp[i][j]
        take=0
        if s[i]==t[j]:
            take=self.solve(s,t,i+1,j+1,dp)
        skip=self.solve(s,t,i+1,j,dp)
        dp[i][j]= skip+take
        return dp[i][j]

    def numDistinct(self, s, t):
        dp=[[-1]*len(t) for _ in range(len(s))]
        return self.solve(s,t,0,0,dp)
        