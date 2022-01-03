// Problem: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/

// O(n)
int removeDuplicates(vector<int>& nums)
{
    int j = 0;
    if (nums.size())
    {
        for (int i = 1; i < nums.size(); i++)
            if (nums[i] != nums[j])
                nums[++j] = nums[i];

        j++;
    }

    return j;
}