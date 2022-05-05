// Problem: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/

/*
* Time Complexity: O(n)
* Space Complexity: O(n)
*/
void rotate(vector<int> &nums, int k)
{
    vector<int> newArray(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        int newIndex = (i + k) % nums.size();
        newArray[newIndex] = nums[i];
    }

    nums = newArray;
}