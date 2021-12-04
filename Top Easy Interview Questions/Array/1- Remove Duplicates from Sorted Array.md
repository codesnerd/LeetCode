Problem: [Remove Duplicates from Sorted Array](https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/) <br>
Solution: [Link](https://github.com/codesnerd/LeetCode/blob/main/Top%20Easy%20Interview%20Questions/Array/1-%20Remove%20Duplicates%20from%20Sorted%20Array.cpp)

## Two-pointer Technique

### Time Complexity: O(n)

1. For a non-empty array, `j` keeps track of the last visited unique element.

2. The `i` loop runs throughout the array and at each index:
   1. Checks whether the current element `nums[i]` is equal to the last visited unique element `nums[j]`.
      - If it is not, this means that we have found a new unique element.
      - We then insert this new element at `nums[++j]`.
   2. We increment `j` by 1 before exiting the `if` condition in order to return the correct size of the "new array".
      - e.g. if 3 unique elements are found, the array size returned should be 4.
