class Solution(object):
    def twoSum(self, numbers, target):
        s = {}

        for i in range(len(numbers)):
            t = target - numbers[i]

            if t in s:
                return [s[t] + 1, i + 1]

            s[numbers[i]] = i

        return []