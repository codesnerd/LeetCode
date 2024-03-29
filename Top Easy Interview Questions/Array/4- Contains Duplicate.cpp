// Problem: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/

/*
 * Time Complexity: O(n) - Unordered vector to unordered set (https://stackoverflow.com/a/63121302/11917891)
 * Space Complexity: O(n)
 */
bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> isDuplicate(nums.begin(), nums.end());

    return nums.size() == isDuplicate.size() ? false : true;
}
