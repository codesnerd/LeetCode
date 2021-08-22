// Problem: https://leetcode.com/problems/two-sum/

// O(n²)
vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int first = nums[i];
        for (int j = i + 1; j < nums.size(); j++)
        {
            int second = nums[j];
            if (first + second == target)
            {
                return {i, j};
            }
        }
    }

    return {-1, -1};
}


// O(n) Hashmap

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> cMap;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        if (cMap.find(complement) != cMap.end()) //found
            return {i, cMap[complement]};

        cMap.insert({nums[i], i});
    }

    return {-1, -1};
}
