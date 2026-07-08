class Solution {
public:
    bool check(vector<int>& ranks, int cars, long long time) {
        long long cnt = 0;

        for (int r : ranks) {
            cnt += sqrt((long double)time / r);

            if (cnt >= cars)
                return true;
        }

        return false;
    }

    long long repairCars(vector<int>& ranks, int cars) {
        long long s = 1;

        int mn = *min_element(ranks.begin(), ranks.end());
        long long e = 1LL * mn * cars * cars;   

        while (s < e) {
            long long m = s + (e - s) / 2;

            if (check(ranks, cars, m))
                e = m;
            else
                s = m + 1;
        }

        return s;
    }
};