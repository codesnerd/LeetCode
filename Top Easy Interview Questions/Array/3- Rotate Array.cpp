// Problem: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/

/*
 * --- SOLUTION 1 ---
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

/*
 * --- SOLUTION 2 ---
 * Time Complexity: O(n)
 * Space Complexity: O(1) In-place
 */

/* HELPER FUNCTION */
void reverse(vector<int> &arr, int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotate(vector<int> &nums, int k)
{
    int size = nums.size();
    k %= size;
    reverse(nums, 0, size - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, size - 1);
}