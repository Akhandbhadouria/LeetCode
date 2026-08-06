class Solution {
public:
    int check(int n) {
        int prod = 1;
        while (n) {
            prod *= (n % 10);
            n /= 10;
        }
        return prod;
    }

    int smallestNumber(int n, int t) {
        for (int i = n; ; i++) {
            if (check(i) % t == 0)
                return i;
        }
    }
};