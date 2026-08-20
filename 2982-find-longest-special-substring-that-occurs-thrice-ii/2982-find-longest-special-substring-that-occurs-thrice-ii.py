class Solution:
    def maximumLength(self, s: str) -> int:

        d = defaultdict(int)
        subs = [''.join(sub) for _, sub in groupby(s)]   # <-- 1.
        
        for sub in subs:                                 #
            d[sub]+= 1                                   # <-- 2.
            if len(sub) > 1: d[sub[1:]]+= 2              #
            if len(sub) > 2: d[sub[2:]]+= 3              #

        return max(map(len,filter(lambda x: d[x] > 2,    # <-- 3.
                             d.keys())), default = -1)
                             