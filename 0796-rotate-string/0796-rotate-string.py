class Solution(object):
    def rotateString(self, s, goal):
        for i in range(0,len(s)):
            goal+=goal[i]
        return s in goal


        