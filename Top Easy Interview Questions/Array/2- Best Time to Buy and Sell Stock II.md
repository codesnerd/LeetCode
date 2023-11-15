Problem: [Best Time to Buy and Sell Stock II](https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/564/) <br>
Solution: [Link](https://github.com/codesnerd/LeetCode/blob/main/Top%20Easy%20Interview%20Questions/Array/2-%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20II.cpp)

### Time Complexity: O(n)

<!-- The idea is to sell stock to maximize profit. We can achieve this by  -->
The idea is to buy stock when the market is at the lowest (local minima) and sell it when the market rates are at peak / the highest (local maxima). Instead of going through the hassle of finding local minimas and maximas, the trick is to loop through all the days and add the marginal gains of each day which will eventually amount to the highest potential profit.

The solution is correct not because you are selling on the days which are higher than the previous day but rather the loop adds up all potential gains.   So if for example the array is  [5, 7, 100] the best is to buy on day 1 where the price is 5 and sell on day three where the price is 100.  Kevin's solution adds the gains of day one to day two with the gains of day two to day three.  Even if selling and re buying on the same day is not allowed this is still correct.
