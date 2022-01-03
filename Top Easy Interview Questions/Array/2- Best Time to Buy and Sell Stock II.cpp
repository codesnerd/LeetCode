// Problem: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/564/

// O(n)
int maxProfit(vector<int>& prices)
{
    int profit = 0;
    
    for (int i = 0; i < prices.size() - 1; i++)
        if (prices[i] < prices[i + 1])
            profit += prices[i + 1] - prices[i];
    
    return profit;
}