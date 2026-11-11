class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth,
                          int need1, int need2) {

        long long ans = 0;

        // Case 1: Buy only individual items
        long long case1 = 1LL * need1 * cost1 +
                          1LL * need2 * cost2;

        // Case 2: Buy only type 3 items
        long long case2 = 1LL * max(need1, need2) * costBoth;

        // Case 3: Buy type 3 for common requirement
        // and individual items for remaining requirement
        long long common = min(need1, need2);

        long long case3 = common * costBoth +
                          1LL * (need1 - common) * cost1 +
                          1LL * (need2 - common) * cost2;

        return min({case1, case2, case3});
    }
};