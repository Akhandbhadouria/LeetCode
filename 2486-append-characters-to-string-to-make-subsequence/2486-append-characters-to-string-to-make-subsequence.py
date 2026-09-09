class Solution(object):
    def appendCharacters(self, s, t):
        si = 0
        ti = 0

        for i in range(len(s)):
            if ti < len(t) and s[i] == t[ti]:
                ti += 1

            if ti == len(t):
                break

        return len(t) - ti