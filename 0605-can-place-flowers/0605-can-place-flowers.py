class Solution(object):
    def canPlaceFlowers(self, flo, n):
        if n==0:
            return True
        for i in range(len(flo)):

            if flo[i] == 0:

                if i == 0:
                    if len(flo) == 1 or flo[i+1] == 0:
                        flo[i] = 1
                        n -= 1

                elif i == len(flo)-1:
                    if flo[i-1] == 0:
                        flo[i] = 1
                        n -= 1

                elif flo[i-1] == 0 and flo[i+1] == 0:
                    flo[i] = 1
                    n -= 1

            if n == 0:
                return True

        return False