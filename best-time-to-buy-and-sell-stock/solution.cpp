class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int smallest = INT_MAX;
        int profit = 0;

        for (int i = 0; i < prices.size(); i++) {

            if (prices[i] < smallest) {
                smallest = prices[i];
            }

            if (prices[i] - smallest > profit) {

                profit = prices[i] - smallest;
            }
        }
        return profit;
    }
};